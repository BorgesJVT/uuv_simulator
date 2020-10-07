import os
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    world = os.path.join(get_package_share_directory(
        'chiton_world'), 'worlds', 'rbim_world.world')
    #namespace = LaunchConfiguration('namespace')
    
    gazebo_cmd = ExecuteProcess(
        cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so', world],
        output='screen')

    ld = LaunchDescription()

    ld.add_action(gazebo_cmd)

    return ld
