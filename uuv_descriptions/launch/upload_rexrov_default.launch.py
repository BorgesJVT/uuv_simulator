import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory

pkg_share = FindPackageShare('uuv_descriptions').find('uuv_descriptions')
urdf_dir = os.path.join(pkg_share, 'urdf')
xacro_file = os.path.join(urdf_dir, 'rexrov_base.xacro')
doc = xacro.process_file(xacro_file)
robot_desc = doc.toprettyxml(indent='  ')

robot_desc = robot_desc.replace('"', '\\"')
spawn_args = '{name: \"rexrov\", xml: \"'  +  robot_desc + '\"}'
params = {'robot_description': robot_desc}


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='debug',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='x',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='y',
            default_value='0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='z',
            default_value='-20'
        ),
        launch.actions.DeclareLaunchArgument(
            name='roll',
            default_value='0.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='pitch',
            default_value='0.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='yaw',
            default_value='0.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='mode',
            default_value='default'
        ),
        launch.actions.DeclareLaunchArgument(
            name='namespace',
            default_value='rexrov'
        ),
        launch.actions.DeclareLaunchArgument(
            name='use_ned_frame',
            default_value='false'
        ),
        
        launch.actions.DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),

        launch.actions.ExecuteProcess(
                cmd=['ros2', 'service', 'call', '/spawn_entity', 'gazebo_msgs/SpawnEntity', spawn_args],
                output='screen')
        
        launch.actions.Node(
                package='robot_state_publisher',
                executable='robot_state_publisher',
                name='robot_state_publisher',
                output='screen',
                parameters=[{'use_sim_time': 'true'}],
                arguments=[robot_desc])
                            
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'uuv_descriptions'), 'launch/message_to_tf.launch.py')
            ),
            launch_arguments={
                'namespace': launch.substitutions.LaunchConfiguration('namespace'),
                'world_frame': 'world',
                'child_frame_id': 'rexrov/base_link'
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
