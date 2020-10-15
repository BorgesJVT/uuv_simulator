import os
import sys

import launch
import launch_ros.actions


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
            name='base_link',
            default_value='base_link'
        ),
        launch.actions.DeclareLaunchArgument(
            name='timeout',
            default_value='-1'
        ),
        launch.actions.DeclareLaunchArgument(
            name='reset_tam',
            default_value='false'
        ),
        launch.actions.DeclareLaunchArgument(
            name='output_dir',
            default_value=launch.substitutions.LaunchConfiguration(
                'model_name')
        ),
        launch.actions.DeclareLaunchArgument(
            name='config_file',
            default_value=launch.substitutions.LaunchConfiguration(
                'model_name')
        ),
        launch.actions.DeclareLaunchArgument(
            name='tam_file',
            default_value=launch.substitutions.LaunchConfiguration(
                'model_name')
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
