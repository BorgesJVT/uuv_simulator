import os

import launch
import launch_ros.actions
#from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import ExecuteProcess, IncludeLaunchDescription, DeclareLaunchArgument
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource



def generate_launch_description():

    world = LaunchConfiguration('world')
    
    # World parameters
    #declare_world_cmd = DeclareLaunchArgument(
    #    'world',
    #    default_value=os.path.join(
    #        get_package_share_directory('rbim_world'), 'worlds', 'rbim_world.world'),
    #    description='Full path to world model file to load')

    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value=os.path.join(
            get_package_share_directory('uuv_gazebo_worlds'), 'worlds', 'empty_underwater.world'),
        description='Full path to world model file to load')
                
    gazebo_cmd = ExecuteProcess(
            cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so', world],
            output='screen')

    # Robot parameters
    spawn_rbim_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('rbim_description'), 'launch', 'spawn_rbim.launch.py')))
    
    
    spawn_rexrov_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('uuv_descriptions'), 'launch', 'upload_rexrov.launch.py')))
            
    spawn_ball_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('rbim_description'), 'launch', 'spawn_ball.launch.py')))
            
    return LaunchDescription([
        declare_world_cmd,
        gazebo_cmd,
        #spawn_rbim_cmd,
        spawn_rexrov_cmd,
        spawn_ball_cmd,
    ])
