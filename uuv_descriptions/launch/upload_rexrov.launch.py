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
    
    #x = LaunchConfiguration('x', default='0.0')
    #y = LaunchConfiguration('y', default='0.0')
    #z = LaunchConfiguration('z', default='0.0')
    pkg_share = FindPackageShare('uuv_descriptions').find('uuv_descriptions')
    urdf_dir = os.path.join(pkg_share, 'urdf')
    xacro_file = os.path.join(urdf_dir, 'rexrov_base.xacro')
    doc = xacro.process_file(xacro_file)
    robot_desc = doc.toprettyxml(indent='  ')

    robot_desc = robot_desc.replace('"', '\\"')
    spawn_args = '{name: \"rexrov\", xml: \"'  +  robot_desc + '\"}'
    params = {'robot_description': robot_desc}

    gazebo = ExecuteProcess(
            cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so'],
            output='screen')

    spawn_entity = ExecuteProcess(
            cmd=['ros2', 'service', 'call', '/spawn_entity', 'gazebo_msgs/SpawnEntity', spawn_args],
            output='screen')
    
    rsp = Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': 'true'}],
            arguments=[robot_desc])
            
    return LaunchDescription([
        #gazebo,
        spawn_entity,
        rsp,
    ])
