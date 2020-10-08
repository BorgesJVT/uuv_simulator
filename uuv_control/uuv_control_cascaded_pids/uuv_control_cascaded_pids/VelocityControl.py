#!/usr/bin/env python
# Copyright (c) 2016 The UUV Simulator Authors.
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
import math
import rclpy
from rclpy.node import Node
#from dynamic_reconfigure.server import Server
from geometry_msgs.msg import Twist, Accel, Vector3
from nav_msgs.msg import Odometry

# Modules included in this package
from uuv_control_cascaded_pids import PIDRegulator
#from uuv_control_cascaded_pid.cfg import VelocityControlConfig

# epsilon for testing whether a number is close to zero
_EPS = numpy.finfo(float).eps * 4.0

def quaternion_matrix(quaternion):
    """Return homogeneous rotation matrix from quaternion.
    >>> R = quaternion_matrix([0.06146124, 0, 0, 0.99810947])
    >>> numpy.allclose(R, rotation_matrix(0.123, (1, 0, 0)))
    True
    """
    q = numpy.array(quaternion[:4], dtype=numpy.float64, copy=True)
    nq = numpy.dot(q, q)
    if nq < _EPS:
        return numpy.identity(4)
    q *= math.sqrt(2.0 / nq)
    q = numpy.outer(q, q)
    return numpy.array((
        (1.0-q[1, 1]-q[2, 2],     q[0, 1]-q[2, 3],     q[0, 2]+q[1, 3], 0.0),
        (    q[0, 1]+q[2, 3], 1.0-q[0, 0]-q[2, 2],     q[1, 2]-q[0, 3], 0.0),
        (    q[0, 2]-q[1, 3],     q[1, 2]+q[0, 3], 1.0-q[0, 0]-q[1, 1], 0.0),
        (                0.0,                 0.0,                 0.0, 1.0)
        ), dtype=numpy.float64)
        
class VelocityControllerNode(Node):
    def __init__(self):
        super().__init__('VelocityControllerNode')
        print('VelocityControllerNode: initializing node')

        self.config = {}

        self.v_linear_des = numpy.zeros(3)
        self.v_angular_des = numpy.zeros(3)

        # Initialize pids with default parameters
        self.pid_angular = PIDRegulator(1, 0, 0, 1)
        self.pid_linear = PIDRegulator(1, 0, 0, 1)

        # ROS infrastructure
        self.sub_cmd_vel = self.create_subscription(Twist, 'cmd_vel', self.cmd_vel_callback, 1)
        self.sub_odometry = self.create_subscription(Odometry, 'odom', self.odometry_callback, 2)
        self.pub_cmd_accel = self.create_publisher(Accel, 'cmd_accel', 10)

        self.pid_linear = PIDRegulator(10.0, \
                                       2.0, \
                                       0.0, \
                                       20.0)
        self.pid_angular = PIDRegulator(10.0, \
                                        2.0, \
                                        1.0, \
                                        5.0)

        # self.pid_linear = PIDRegulator(self.get_parameter("velocity_control/linear_p"), \
        #                               self.get_parameter("velocity_control/linear_i"), \
        #                               self.get_parameter("velocity_control/linear_d"), \
        #                               self.get_parameter("velocity_control/linear_sat"))
        # self.pid_angular = PIDRegulator(self.get_parameter("velocity_control/angular_p"), \
        #                                self.get_parameter("velocity_control/angular_i"), \
        #                                self.get_parameter("velocity_control/angular_d"), \
        #                                self.get_parameter("velocity_control/angular_sat"))

    def cmd_vel_callback(self, msg):
        """Handle updated set velocity callback."""
        # Just store the desired velocity. The actual control runs on odometry callbacks
        v_l = msg.linear
        v_a = msg.angular
        self.v_linear_des = numpy.array([v_l.x, v_l.y, v_l.z])
        self.v_angular_des = numpy.array([v_a.x, v_a.y, v_a.z])

    def odometry_callback(self, msg):
        """Handle updated measured velocity callback."""

        #if not bool(self.config):
        #    return

        linear = msg.twist.twist.linear
        angular = msg.twist.twist.angular
        v_linear = numpy.array([linear.x, linear.y, linear.z])
        v_angular = numpy.array([angular.x, angular.y, angular.z])

        #if self.config['odom_vel_in_world']:
            # This is a temp. workaround for gazebo's pos3d plugin not behaving properly:
            # Twist should be provided wrt child_frame, gazebo provides it wrt world frame
            # see http://docs.ros.org/api/nav_msgs/html/msg/Odometry.html
        xyzw_array = lambda o: numpy.array([o.x, o.y, o.z, o.w])
        q_wb = xyzw_array(msg.pose.pose.orientation)
        R_bw = quaternion_matrix(q_wb)[0:3, 0:3].transpose()
        # R_bw = quaternion_matrix(q_wb) # Tá correto esse valor??

        v_linear = R_bw.dot(v_linear)
        v_angular = R_bw.dot(v_angular)

        # Compute compute control output:
        t = msg.header.stamp.sec
        e_v_linear = (self.v_linear_des - v_linear)
        e_v_angular = (self.v_angular_des - v_angular)

        a_linear = self.pid_linear.regulate(e_v_linear, t)
        a_angular = self.pid_angular.regulate(e_v_angular, t)

        # Convert and publish accel. command:
        cmd_accel = Accel()
        cmd_accel.linear.x = a_linear[0]
        cmd_accel.linear.y = a_linear[1]
        cmd_accel.linear.z = a_linear[2]
        cmd_accel.angular.x = a_angular[0]
        cmd_accel.angular.y = a_angular[1]
        cmd_accel.angular.z = a_angular[2]

        self.pub_cmd_accel.publish(cmd_accel)

        # self.config = config

        # return config

def main(args=None):
    rclpy.init(args=args)
    print('starting VelocityControl.py')
    node = VelocityControllerNode()
    rclpy.spin(node)

        
if __name__ == '__main__':
    main()
