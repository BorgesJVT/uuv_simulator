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
    xacro_file = os.path.join(urdf_dir, 'ball.xacro')
    doc = xacro.process_file(xacro_file)
    robot_desc = doc.toprettyxml(indent='  ')

    robot_desc = robot_desc.replace('"', '\\"')
    spawn_args = '{name: \"ball\", xml: \"'  +  robot_desc + '\"}'
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
