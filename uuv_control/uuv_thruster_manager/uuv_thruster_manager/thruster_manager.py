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

import numpy
import rclpy
from rclpy.node import Node
from rclpy.duration import Duration
# import tf
# from tf_quaternion import transformations
import tf2_ros
from os.path import isdir, join
import yaml
from time import sleep
# from uuv_gazebo_ros_plugins_msgs.msg import FloatStamped
from geometry_msgs.msg import Wrench
import xml.etree.ElementTree as etree

import xacro
import os
from launch_ros.substitutions import FindPackageShare
import xml.etree.ElementTree as ET
from ament_index_python.packages import get_package_share_directory


from uuv_thruster_manager import Thruster


pkg_share = FindPackageShare('uuv_descriptions').find('uuv_descriptions')
urdf_dir = os.path.join(pkg_share, 'urdf')
xacro_file = os.path.join(urdf_dir, 'rexrov_base.xacro')
doc = xacro.process_file(xacro_file)
robot_desc = doc.toprettyxml(indent='  ')
robot_desc = robot_desc.replace('"', '\\"')

class ThrusterManager(Node):
    """
    The thruster manager generates the thruster allocation matrix using the
    TF information and publishes the thruster forces assuming the thruster
    topics are named in the following pattern

    <thruster_topic_prefix>/<index>/<thruster_topic_suffix>

    Thruster frames should also be named as follows

    <thruster_frame_base>_<index>
    """

    
    MAX_THRUSTERS = 16

    def __init__(self):
        """Class constructor."""
        super().__init__('ThrusterManagerNode')
        
        # This flag will be set to true once the thruster allocation matrix is
        # available
        self._ready = False

        # Acquiring the namespace of the vehicle
        self.namespace = '/rexrov'

        # Load all parameters
        self.config = {}
        
        self.config['update_rate'] = 50
        self.config['tf_prefix'] = 'rexrov'
        self.config['base_link'] = 'base_link'
        self.config['thruster_topic_prefix'] = 'thrusters/'
        self.config['thruster_topic_suffix'] = '/input'
        self.config['thruster_frame_base'] = 'thruster_'
        self.config['max_thrust'] = 2000.0
        self.config['timeout'] = Duration()
        self.config['update_rate'] = 50
        self.config['conversion_fcn'] = 'proportional'
        self.config['gain'] = 0.00031

        self.tam =  [ [0.15974268848446743, 0.15974268848446743, -0.1597424266785477, -0.1597424266785477, 0.7071068613706476, 0.7071068613706476, -0.7071065406341925, -0.7071065406341925],
                     [-0.2136101154609486, 0.2136101154609486, -0.21360976537047976, 0.21360976537047976,  0.7071067010024383, -0.7071067010024383, 0.7071070217388206, -0.7071070217388206],
                     [0.9637701967007046, 0.9637701967007046, 0.9637703176884092, 0.9637703176884092,  0.0, 0.0, 0.0, 0.0],
                     [0.4352320257020549, -0.4352320257020549, 0.43523188102298654, -0.43523188102298654,  -0.09121676442931455, 0.09121676442931455, -0.09121680580430785, 0.09121680580430785],
                     [0.9430934973994073, 0.9430934973994073, -0.9430934667380183, -0.9430934667380183,  0.09121678511681354, 0.09121678511681354, -0.09121674374181084, -0.09121674374181084],
                     [0.13688862492470316, -0.13688862492470316, -0.1368884005748274, 0.1368884005748274,  -0.6487987634902757, 0.6487987634902757, 0.6487987335687417, -0.6487987335687417]
                    ]

        # self.declare_parameters(
        #     namespace='/rexrov',
        #     parameters=[
        #         ('tam', None),
        #         ('thruster_manager.update_rate', None),
        #         ('thruster_manager.tf_prefix', None),
        #         ('thruster_manager.base_link', None),
        #         ('thruster_manager.thruster_topic_prefix', None),
        #         ('thruster_manager.thruster_topic_suffix', None),
        #         ('thruster_manager.thruster_frame_base', None),
        #         ('thruster_manager.max_thrust', None),
        #         ('thruster_manager.timeout', None),
        #         ('thruster_manager.update_rate', None),
        #         ('thruster_manager.conversion_fcn', None),
        #         ('thruster_manager.conversion_fcn_params.gain', None)
        #     ])
        # 

        urdf = os.path.join(
                 get_package_share_directory('uuv_thruster_manager'), 'urdf', 'robot.urdf')
        print (urdf)
        # We need to remap the transform (/tf) topic so each robot has its own.
        # We do this by adding `ROS argument entries` to the urdf file for
        # each plugin broadcasting a transform. These argument entries provide the
        # remapping rule, i.e. /tf -> /<robot_id>/tf
        tree = ET.parse(urdf)
        root = tree.getroot()
        # for plugin in root.iter('plugin'):
        #     # TODO(orduno) Handle case if an urdf file from non-squarbo is provided
        #     if 'squarbo_diff_drive' in plugin.attrib.values():
        #         # The only plugin we care for now is 'diff_drive' which is
        #         # broadcasting a transform between`odom` and `base_footprint`
        #         break

        robot_description_param = self.namespace + 'robot_description'

        self.use_robot_descr = False
        self.axes = {}
        # if rclpy.has_param(robot_description_param):
        self.use_robot_descr = True

        #root = etree.fromstring('rexrovrobotdescription')

        # try:
        #     root = etree.fromstring(urdf)
        # except etree.ParseError as e:
        #     self.get_logger().error('Invalid XML: {}'.format(e))
        #     return 1


        for joint in root.findall('joint'):
            if joint.get('type') == 'fixed':
                continue
            axis_str_list = joint.find('axis').get('xyz').split()
            child = joint.find('child').get('link')
            if child[0]!='/':
                child = '/'+child

            self.axes[child] = numpy.array([float(axis_str_list[0]),
                                            float(axis_str_list[1]),
                                            float(axis_str_list[2]), 0.0])


        if self.config['update_rate'] < 0:
            self.config['update_rate'] = 50

        self.base_link_ned_to_enu = None

        tf_buffer = tf2_ros.Buffer()
        listener = tf2_ros.TransformListener(tf_buffer, self)
        tf_trans_ned_to_enu = None

        try:
            if self.namespace != '':
                target = '{}base_link'.format(self.namespace)
                target = target[1::]
                source = '{}base_link_ned'.format(self.namespace)
            else:
                target = 'base_link'
                source = 'base_link_ned'
            source = source[1::]
            tf_trans_ned_to_enu = tf_buffer.lookup_transform(
                target, source, rclpy.time.Time(), rclpy.duration.Duration(1))
        except Exception as e:
            self.get_logger().info('No transform found between base_link and base_link_ned'
                  ' for vehicle {}, message={}'.format(self.namespace, e))
            self.base_link_ned_to_enu = None

        if tf_trans_ned_to_enu is not None:
            self.base_link_ned_to_enu = transformations.quaternion_matrix(
                (tf_trans_ned_to_enu.transform.rotation.x,
                 tf_trans_ned_to_enu.transform.rotation.y,
                 tf_trans_ned_to_enu.transform.rotation.z,
                 tf_trans_ned_to_enu.transform.rotation.w))[0:3, 0:3]

            rclpy.get_logger().info('base_link transform NED to ENU=\n' + str(self.base_link_ned_to_enu))

        self.get_logger().info(
          'ThrusterManager::update_rate=' + str(self.config['update_rate']))

        # Set the tf_prefix parameter
        #rclpy.set_param('thruster_manager/tf_prefix', self.namespace)
        self.declare_parameter("thruster_manager/tf_prefix", self.namespace);

        # Retrieve the output file path to store the TAM ######NAO IREMOS GERAR A TAM
        # matrix for future use
        # self.output_dir = None
        # if rclpy.has_param('~output_dir'):
        #     self.output_dir = rclpy.get_param('~output_dir')
        #     if not isdir(self.output_dir):
        #         raise rclpy.get_logger().warn(
        #             'Invalid output directory, output_dir=' + self.output_dir)
        #     rclpy.get_logger().info('output_dir=' + self.output_dir)

        # Number of thrusters
        self.n_thrusters = 0

        # Thruster objects used to calculate the right angular velocity command
        self.thrusters = list()

        # Thrust forces vector
        self.thrust = None

        # Thruster allocation matrix: transform thruster inputs to force/torque
        self.configuration_matrix = None
#        if self.has_param('~tam'):
        ######################## TIREI O IF DAQUI
        #tam = self.get_parameter('tam')
        #print("%s" % tam._value)


        self.configuration_matrix = numpy.array(self.tam)
        # Set number of thrusters from the number of columns
        self.n_thrusters = self.configuration_matrix.shape[1]
        # Create publishing topics to each thruster
        params = self.config['gain']
        conv_fcn = self.config['conversion_fcn']
        if type(params) == list and type(conv_fcn) == list:
            if len(params) != self.n_thrusters or len(conv_fcn) != self.n_thrusters:
                raise self.get_logger().warn('Lists conversion_fcn and '
                                         'conversion_fcn_params must have '
                                         'the same number of items as of '
                                         'thrusters')
        #else:
            print(type(params)) #-- <class 'float'>
            print(type(conv_fcn)) #<class 'str'>
            print(self.n_thrusters) #8



        for i in range(self.n_thrusters):
            topic = '/rexrov/' + self.config['thruster_topic_prefix'] + 'id' + str(i) + \
                self.config['thruster_topic_suffix']
            print (topic)
            if list not in [type(params), type(conv_fcn)]:
                print("AQUI")
                thruster = Thruster(self.config['gain'],
                     i, topic, None, None,
                     None) #TO BE DONE 

                    #def __init__(self, index, topic, pos, orientation, axis=DEFAULT_AXIS):
            # else:
            #      thruster = Thruster.create_thruster(
            #          conv_fcn[i], i, topic, None, None,
            #          **params[i])

            if thruster is None:
                self.get_logger().warn('Invalid thruster conversion '
                                   'function=%s'
                                   % self.config['conversion_fcn'])
            self.thrusters.append(thruster)

        self.get_logger().info('Thruster allocation matrix provided!')
        self.get_logger().info('TAM=')
        self.get_logger().info(numpy.array2string(self.configuration_matrix))
        self.thrust = numpy.zeros(self.n_thrusters)
        ######################### TIREI O IF ATE AQUI

        ######################### JA TEMOS A TAM, NAO PRECISA CALCULAR
        # if not self.update_tam(): 
        #     raise rclpy.get_logger().warn('No thrusters found')

        #(pseudo) inverse: force/torque to thruster inputs
        self.inverse_configuration_matrix = None
        
        if self.configuration_matrix is not None:
            self.inverse_configuration_matrix = numpy.linalg.pinv(
                self.configuration_matrix)

        ######################### NAO IREMOS GERAR A TAM
        # # # If an output directory was provided, store matrix for further use
        # # if self.output_dir is not None:
        # #     with open(join(self.output_dir, 'TAM.yaml'), 'w') as yaml_file:
        # #         yaml_file.write(
        # #             yaml.safe_dump(
        # #                 dict(tam=self.configuration_matrix.tolist())))
        # # else:
        # #     rclpy.get_logger().info('Invalid output directory for the TAM matrix, dir=' + str(self.output_dir))

        self._ready = True
        self.get_logger().info('ThrusterManager: ready')

    # def parse_urdf(self, urdf_str):
    #     root = etree.fromstring(urdf_str)
    #     for joint in root.findall('joint'):
    #         if joint.get('type') == 'fixed':
    #             continue
    #         axis_str_list = joint.find('axis').get('xyz').split()
    #         child = joint.find('child').get('link')
    #         if child[0]!='/':
    #             child = '/'+child

    #         self.axes[child] = numpy.array([float(axis_str_list[0]),
    #                                         float(axis_str_list[1]),
    #                                         float(axis_str_list[2]), 0.0])

  
    

    def command_thrusters(self):
        """Publish the thruster input into their specific topic."""
        print("SELF->TRHUSTER ")
        #print(self.thrust)

        if self.thrust is None:
            #print("ENTROU")
            return

        for i in range(self.n_thrusters):
            #print("Publish truster:")
            #print(self.thrust[i])
            self.thrusters[i].publish_command(self.thrust[i])

    def publish_thrust_forces(self, control_forces, control_torques,
                              frame_id=None):
        if not self._ready:
            return

        if frame_id is not None:
            if self.config['base_link'] != frame_id:
                assert self.base_link_ned_to_enu is not None, 'Transform from'
                ' base_link_ned to base_link could not be found'
                if 'base_link_ned' not in self.config['base_link']:
                    control_forces = numpy.dot(self.base_link_ned_to_enu,
                                               control_forces)
                    control_torques = numpy.dot(self.base_link_ned_to_enu,
                                                control_torques)
                else:
                    control_forces = numpy.dot(self.base_link_ned_to_enu.T,
                                               control_forces)
                    control_torques = numpy.dot(self.base_link_ned_to_enu.T,
                                                control_torques)

        gen_forces = numpy.hstack(
            (control_forces, control_torques)).transpose()
        self.thrust = self.compute_thruster_forces(gen_forces)
        self.command_thrusters()

    def compute_thruster_forces(self, gen_forces):
        """Compute desired thruster forces using the inverse configuration
        matrix.
        """
        # Calculate individual thrust forces
        thrust = self.inverse_configuration_matrix.dot(gen_forces)
        # Obey limit on max thrust by applying a constant scaling factor to all
        # thrust forces
        limitation_factor = 1.0
        if type(self.config['max_thrust']) == list:
            if len(self.config['max_thrust']) != self.n_thrusters:
                raise rclpy.ROSException('max_thrust list must have the length'
                                         ' equal to the number of thrusters')
            max_thrust = self.config['max_thrust']
        else:
            max_thrust = [self.config['max_thrust'] for _ in range(self.n_thrusters)]
        for i in range(self.n_thrusters):
            if abs(thrust[i]) > max_thrust[i]:
                thrust[i] = numpy.sign(thrust[i]) * max_thrust[i]
        return thrust

######################### JA TEMOS A TAM, NAO PRECISA CALCULAR
    # def update_tam(recalculate=False):
    #     """Calculate the thruster allocation matrix, if one is not given."""
    #     if self.configuration_matrix is not None and not recalculate:
    #         self.ready = True
    #         rclpy.get_logger().info('TAM provided, skipping...')
    #         rclpy.get_logger().info('ThrusterManager: ready')
    #         return True

    #     self.ready = False
    #     rclpy.get_logger().info('ThrusterManager: updating thruster poses')
    #     # Small margin to make sure we get thruster frames via tf
    #     now = rclpy.get_clock().now() + rclpy.duration.Duration(0.2)

    #     base = self.namespace + self.config['base_link']

    #     self.thrusters = list()

    #     equal_thrusters = True
    #     idx_thruster_model = 0

    #     if type(self.config['conversion_fcn_params']) == list and \
    #         type(self.config['conversion_fcn']) == list:
    #         if len(self.config['conversion_fcn_params']) != len(
    #             self.config['conversion_fcn']):
    #             raise rclpy.ROSException(
    #                 'Lists of conversion_fcn_params and conversion_fcn'
    #                 ' must have equal length')
    #         equal_thrusters = False

    #     rclpy.get_logger().info('conversion_fcn=' + str(self.config['conversion_fcn']))
    #     rclpy.get_logger().info('conversion_fcn_params=' + str(self.config['conversion_fcn_params']))

    #     listener = tf.TransformListener()
    #     sleep(0.1)

    #     for i in range(self.MAX_THRUSTERS):
    #         frame = self.namespace + \
    #             self.config['thruster_frame_base'] + str(i)
    #         try:
    #             # try to get thruster pose with respect to base frame via tf
    #             rclpy.get_logger().info('transform: ' + base + ' -> ' + frame)
    #             now = rclpy.get_clock().now() + rclpy.duration.Duration(0.2)
    #             listener.waitForTransform(base, frame,
    #                                            now, rclpy.duration.Duration(1.0))
    #             [pos, quat] = listener.lookupTransform(base, frame, now)

    #             topic = self.config['thruster_topic_prefix'] + str(i) + \
    #                 self.config['thruster_topic_suffix']

    #             # If not using robot_description, thrust_axis=None which will
    #             # result in the thrust axis being the x-axis,i.e. (1,0,0)
    #             thrust_axis = None if not self.use_robot_descr else self.axes[frame]

    #             if equal_thrusters:
    #                 params = self.config['conversion_fcn_params']
    #                 thruster = Thruster.create_thruster(
    #                     self.config['conversion_fcn'],
    #                     i, topic, pos, quat, self.axes[frame], **params)
    #             else:
    #                 if idx_thruster_model >= len(self.config['conversion_fcn']):
    #                     raise rclpy.ROSException('Number of thrusters found and '
    #                                              'conversion_fcn are different')
    #                 params = self.config['conversion_fcn_params'][idx_thruster_model]
    #                 conv_fcn = self.config['conversion_fcn'][idx_thruster_model]
    #                 thruster = Thruster.create_thruster(
    #                     conv_fcn,
    #                     i, topic, pos, quat, self.axes[frame],
    #                     **params)
    #                 idx_thruster_model += 1
    #             if thruster is None:
    #                 rclpy.ROSException('Invalid thruster conversion '
    #                                    'function=%s'
    #                                    % self.config['conversion_fcn'])
    #             self.thrusters.append(thruster)
    #         except tf.Exception:
    #             rclpy.get_logger().info('could not get transform from: ' + base)
    #             rclpy.get_logger().info('to: ' + frame)
    #             break

    #     rclpy.get_logger().info(str(self.thrusters))
    #     if len(self.thrusters) == 0:
    #         return False

    #     # Set the number of thrusters found
    #     self.n_thrusters = len(self.thrusters)

    #     # Fill the thrust vector
    #     self.thrust = numpy.zeros(self.n_thrusters)

    #     # Fill the thruster allocation matrix
    #     self.configuration_matrix = numpy.zeros((6, self.n_thrusters))

    #     for i in range(self.n_thrusters):
    #         self.configuration_matrix[:, i] = self.thrusters[i].tam_column

    #     # Eliminate small values
    #     self.configuration_matrix[numpy.abs(
    #         self.configuration_matrix) < 1e-3] = 0.0

    #     rclpy.get_logger().info('TAM= %s', str(self.configuration_matrix))

    #     # Once we know the configuration matrix we can compute its
    #     # (pseudo-)inverse:
    #     self.inverse_configuration_matrix = numpy.linalg.pinv(
    #         self.configuration_matrix)

    #     # If an output directory was provided, store matrix for further use
    #     if self.output_dir is not None and not recalculate:
    #         with open(join(self.output_dir, 'TAM.yaml'), 'w') as yaml_file:
    #             yaml_file.write(
    #                 yaml.safe_dump(
    #                     dict(tam=self.configuration_matrix.tolist())))
    #         rclpy.get_logger().info('TAM saved in <{}>'.format(join(self.output_dir, 'TAM.yaml')))
    #     elif recalculate:
    #         rclpy.get_logger().info('Recalculate flag on, matrix will not be stored in TAM.yaml')
    #     else:
    #         rclpy.logerr('Invalid output directory for the TAM matrix, dir='.format(
    #             self.output_dir))

    #     self.ready = True
    #     rclpy.get_logger().info('ThrusterManager: ready')
    #     return True