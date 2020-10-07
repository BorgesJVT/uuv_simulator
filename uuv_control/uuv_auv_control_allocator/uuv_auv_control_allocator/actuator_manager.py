# Copyright (c) 2016-2019 The UUV Simulator Authors.
# All rights reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
from .fin_model import FinModel
import rclpy
from rclpy.node import Node
import numpy as np
import tf2_ros
from tf_quaternion.transformations import quaternion_matrix
from uuv_thrusters.models import Thruster
from uuv_auv_control_allocator.msg import AUVCommand
from uuv_gazebo_ros_plugins_msgs.msg import FloatStamped
from geometry_msgs.msg import Wrench, WrenchStamped
import os
import yaml


class ActuatorManager(Node):
    MAX_FINS = 4

    def __init__(self):
        super().__init__('actuator_manager')

        # Acquiring the namespace of the vehicle
        self.get_logger().info('Initialize control allocator for vehicle<%s>' % self.get_namespace())  

        self.tf_buffer = tf2_ros.Buffer()
        self.listener = tf2_ros.transform_listener.TransformListener(self.tf_buffer)
        tf_trans_ned_to_enu = None

        try:
            if self.get_namespace() != '':
                target = '{}/base_link'.format(self.get_namespace())
                source = '{}/base_link_ned'.format(self.get_namespace())
            else:
                target = 'base_link'
                source = 'base_link_ned'
            self.get_logger().info('Lookup transfrom from %s to %s' % (source, target))
            tf_trans_ned_to_enu = self.tf_buffer.lookup_transform(
                target, source, self.time.Time(), self.duration.Duration(1))
        except Exception as e:
            self.get_logger().warn('No transform found between base_link and base_link_ned'
                  ' for vehicle {}, message={}'.format(self.get_namespace(), e))
            self.base_link_ned_to_enu = None

        if tf_trans_ned_to_enu is not None:
            self.base_link_ned_to_enu = quaternion_matrix(
                (tf_trans_ned_to_enu.transform.rotation.x,
                 tf_trans_ned_to_enu.transform.rotation.y,
                 tf_trans_ned_to_enu.transform.rotation.z,
                 tf_trans_ned_to_enu.transform.rotation.w))[0:3, 0:3]

            self.get_logger().warn('base_link transform NED to ENU=\n{}'.format(
                self.base_link_ned_to_enu))

        self.base_link = self.get_parameter_value('~base_link', 'base_link')

        # Check if the thruster configuration is available
        if not self.has_parameter('~thruster_config'):
            raise self.get_logger().warn('Thruster configuration not available') 

        # Retrieve the thruster configuration parameters
        self.thruster_config = self.get_parameter_value('~thruster_config')        

        # Check if all necessary thruster model parameter are available
        thruster_params = ['conversion_fcn_params', 'conversion_fcn', 
            'topic_prefix', 'topic_suffix', 'frame_base', 'max_thrust']
        for p in thruster_params: 
            if p not in self.thruster_config:
                raise self.get_logger().warn(
                    'Parameter <%s> for thruster conversion function is missing' % p)

        # Setting up the thruster topic name
        self.thruster_topic = '/%s/%s/%d/%s' %  (self.get_namespace(), 
            self.thruster_config['topic_prefix'], 0, 
            self.thruster_config['topic_suffix'])
        self.thruster = None

        # Check if the fin configuration is available
        if not self.has_parameter('~fin_config'):
            raise self.get_logger().warn('Fin configuration is not available')

        # Retrieve the fin configuration is available
        self.fin_config = self.get_parameter_value('~fin_config')

        # Check if all necessary fin parameters are available
        fin_params = ['fluid_density', 'lift_coefficient', 'fin_area', 
            'topic_prefix', 'topic_suffix', 'frame_base']

        for p in fin_params:
            if p not in self.fin_config:
                raise self.get_logger().warn(
                    'Parameter <%s> for fin configuration is missing' % p)

        self.fin_lower_limit = -np.pi / 2
        if 'lower_limit' in self.fin_config:
            self.fin_lower_limit = self.fin_config['lower_limit']

        self.fin_upper_limit = np.pi / 2
        if 'upper_limit' in self.fin_config:
            self.fin_upper_limit = self.fin_config['upper_limit']

        if self.fin_config['lower_limit'] >= self.fin_config['upper_limit']:
            raise self.get_logger().warn('Fin angle limits are invalid')

        self.fins = dict()
     
        self.n_fins = 0

        if not self.find_actuators():
            raise self.get_logger().warn('No thruster and/or fins found')

    def find_actuators(self):
        """Calculate the control allocation matrix, if one is not given."""

        self.ready = False
        self.get_logger().info('ControlAllocator: updating thruster poses')

        base = '%s/%s' % (self.get_namespace(), self.base_link)

        frame = '%s/%s%d' % (self.get_namespace(), self.thruster_config['frame_base'], 0)

        self.get_logger().info('Lookup: Thruster transform found %s -> %s' % (base, frame))
        trans = self.tf_buffer.lookup_transform(base, frame, self.time.Time(), self.duration.Duration(1))
        pos = np.array([trans.transform.translation.x,
                           trans.transform.translation.y,
                           trans.transform.translation.z])
        quat = np.array([trans.transform.rotation.x,
                            trans.transform.rotation.y,
                            trans.transform.rotation.z,
                            trans.transform.rotation.w])
        self.get_logger().info('Thruster transform found %s -> %s' % (base, frame))
        self.get_logger().info('pos=' + str(pos))
        self.get_logger().info('rot=' + str(quat))
    
        # Read transformation from thruster
        self.thruster = Thruster.create_thruster(
            self.thruster_config['conversion_fcn'], 0, 
            self.thruster_topic, pos, quat, 
            **self.thruster_config['conversion_fcn_params'])

        for i in range(self.MAX_FINS):
            try:
                frame = '%s/%s%d' % (self.get_namespace(), self.fin_config['frame_base'], i)

                self.get_logger().info('Lookup: Fin transform found %s -> %s' % (base, frame))
                trans = self.tf_buffer.lookup_transform(base, frame, self.time.Time(), self.duration.Duration(1))
                pos = np.array([trans.transform.translation.x,
                                   trans.transform.translation.y,
                                   trans.transform.translation.z])
                quat = np.array([trans.transform.rotation.x,
                                    trans.transform.rotation.y,
                                    trans.transform.rotation.z,
                                    trans.transform.rotation.w])                
                self.get_logger().info('Fin transform found %s -> %s' % (base, frame))
                self.get_logger().info('pos=' + str(pos))
                self.get_logger().info('quat=' + str(quat))

                fin_topic = '/%s/%s/%d/%s' % (self.get_namespace(), 
                    self.fin_config['topic_prefix'], i, self.fin_config['topic_suffix'])

                self.fins[i] = FinModel(
                    i,
                    pos,
                    quat,
                    fin_topic)

            except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException):
                self.get_logger().info('Could not get transform from %s to %s ' % (base, frame))
                break

        self.n_fins = len(self.fins.keys())
        self.get_logger().info('# fins found: %d' % len(self.fins.keys()))

        for i in range(self.n_fins):
            self.get_logger().info(i)
            self.get_logger().info(self.fins[i].pos)
            self.get_logger().info(self.fins[i].rot)

        self.ready = True
        return True

    def compute_control_force(self, thrust, delta, u):
        actuator_model = self.thruster.tam_column.reshape((6, 1)) * thrust
        for i in self.fins:
            f_lift = (0.5 * self.fin_config['fluid_density'] * 
                self.fin_config['lift_coefficient'] * self.fin_config['fin_area'] *  
                delta[i] * u**2)
        
            tau = np.zeros(6)
            tau[0:3] = f_lift * self.fins[i].lift_vector
            tau[3::] = np.cross(self.fins[i].pos, f_lift)
            
            actuator_model += tau
        return actuator_model

    def publish_commands(self, command):
        self.thruster.publish_command(command[0])

        for i in range(self.n_fins):
            self.fins[i].publish_command(command[i + 1])