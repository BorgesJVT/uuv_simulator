# <launch>
#   <arg name="debug" default="0"/>

#   <arg name="x" default="0"/>
#   <arg name="y" default="0"/>
#   <arg name="z" default="-20"/>
#   <arg name="roll" default="0.0"/>
#   <arg name="pitch" default="0.0"/>
#   <arg name="yaw" default="0.0"/>

#   <arg name="mode" default="default"/>
#   <arg name="namespace" default="rexrov"/>
#   <arg name="use_ned_frame" default="false"/>

#   <include file="$(find uuv_descriptions)/launch/upload_rexrov_$(arg mode).launch">
#     <arg name="debug" value="$(arg debug)"/>
#     <arg name="x" value="$(arg x)"/>
#     <arg name="y" value="$(arg y)"/>
#     <arg name="z" value="$(arg z)"/>
#     <arg name="roll" value="$(arg roll)"/>
#     <arg name="pitch" value="$(arg pitch)"/>
#     <arg name="yaw" value="$(arg yaw)"/>
#     <arg name="use_ned_frame" value="$(arg use_ned_frame)"/>
#     <arg name="namespace" value="$(arg namespace)"/>
#   </include>

# </launch>

import os

import launch
import launch_ros.actions
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import ExecuteProcess, IncludeLaunchDescription
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

import xacro


def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    pkg_share = FindPackageShare('rbim_description').find('rbim_description')
    urdf_dir = os.path.join(pkg_share, 'urdf')
    xacro_file = os.path.join(urdf_dir, 'base.xacro')
    doc = xacro.process_file(xacro_file)
    robot_desc = doc.toprettyxml(indent='  ')

    robot_desc = robot_desc.replace('"', '\\"')
    spawn_args = '{name: \"chiton\", xml: \"'  +  robot_desc + '\"}'
    params = {'robot_description': robot_desc}

    gazebo = ExecuteProcess(
            cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so'],
            output='screen')

    spawn_entity = ExecuteProcess(
            cmd=['ros2', 'service', 'call', '/spawn_entity', 'gazebo_msgs/SpawnEntity', spawn_args],
            output='screen')
    
    return LaunchDescription([
        #gazebo,
        spawn_entity,
    ])
