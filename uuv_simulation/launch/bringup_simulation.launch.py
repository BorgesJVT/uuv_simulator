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
                    'uuv_gazebo_worlds'), 'launch/empty_underwater_world.launch.py')
            )
        )
        # launch.actions.IncludeLaunchDescription(
        #     launch.launch_description_sources.PythonLaunchDescriptionSource(
        #         os.path.join(get_package_share_directory(
        #             'uuv_control_cascaded_pids'), 'launch/uuv_keyboard_teleop.launch.py')
        #     ),
        #     launch_arguments={
        #         'uuv_name': launch.substitutions.LaunchConfiguration('uuv_name'),
        #         'output_topic': 'cmd_vel',
        #         'message_type': 'twist'
        #     }.items()
        # )
    ])
    return ld

if __name__ == '__main__':
    generate_launch_description()