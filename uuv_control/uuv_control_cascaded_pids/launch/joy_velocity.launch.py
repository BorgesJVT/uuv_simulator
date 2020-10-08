import os
import sys

import launch
import launch_ros.actions
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='model_name'
        ),
        launch.actions.DeclareLaunchArgument(
            name='uuv_name',
            default_value=launch.substitutions.LaunchConfiguration(
                'model_name')
        ),
        launch.actions.DeclareLaunchArgument(
            name='joy_id',
            default_value='0'
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'uuv_thruster_manager'), 'launch/thruster_manager.launch.py')
            ),
            launch_arguments={
                'uuv_name': launch.substitutions.LaunchConfiguration('uuv_name'),
                'model_name': launch.substitutions.LaunchConfiguration('model_name')
            }.items()
        ),
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'uuv_teleop'), 'launch/uuv_teleop.launch.py')
            ),
            launch_arguments={
                'uuv_name': launch.substitutions.LaunchConfiguration('uuv_name'),
                'joy_id': launch.substitutions.LaunchConfiguration('joy_id'),
                'output_topic': 'cmd_vel',
                'message_type': 'twist'
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
