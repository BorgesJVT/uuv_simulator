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

    accel_node = launch_ros.actions.Node(
        package='uuv_control_cascaded_pids',
        executable="acc_control",
        output='log',
        #prefix = 'gnome-terminal -- ',
        name='acceleration_control'
    )

    veloc_node = launch_ros.actions.Node(
        package='uuv_control_cascaded_pids',
        executable="vel_control",
        output='log',
        #prefix = 'gnome-terminal -- ',
        name='velocity_control'
    )

    teleop_node = launch_ros.actions.Node(
            package='teleop_twist_keyboard',
            executable='teleop_twist_keyboard',
            output='screen',
            prefix = 'gnome-terminal -- ',
            name='teleop_twist_keyboard_node'
            #parameters=[config_filepath]),   
    )

    ld.add_action(veloc_node)
    ld.add_action(accel_node)
    ld.add_action(teleop_node)

    return ld


if __name__ == '__main__':
    generate_launch_description()
