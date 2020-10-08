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
        launch.actions.IncludeLaunchDescription(
            launch.launch_description_sources.PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory(
                    'uuv_thruster_manager'), 'launch/thruster_manager.launch.py')
            ),
            launch_arguments={
                'uuv_name': launch.substitutions.LaunchConfiguration('uuv_name'),
                'model_name': launch.substitutions.LaunchConfiguration('model_name')
            }.items()
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
