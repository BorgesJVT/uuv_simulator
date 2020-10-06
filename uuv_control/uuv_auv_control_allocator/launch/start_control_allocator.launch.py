import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='uuv_name'
        ),
        launch.actions.DeclareLaunchArgument(
            name='base_link',
            default_value='base_link'
        ),
        launch.actions.DeclareLaunchArgument(
            name='output_dir'
        ),
        launch.actions.DeclareLaunchArgument(
            name='input_topic',
            default_value='control_allocation/control_input'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_topic_prefix',
            default_value='thrusters'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_topic_suffix',
            default_value='input'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_frame_base',
            default_value='thruster_'
        ),
        launch.actions.DeclareLaunchArgument(
            name='max_thrust',
            default_value='120'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_conversion_fcn',
            default_value='proportional'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_gain',
            default_value='0.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_input',
            default_value='0,1,2,3'
        ),
        launch.actions.DeclareLaunchArgument(
            name='thruster_output',
            default_value='0,1,2,3'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fin_frame_base',
            default_value='fin'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fluid_density',
            default_value='1028.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='lift_coefficient',
            default_value='0.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fin_area',
            default_value='0.0'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fin_topic_prefix',
            default_value='fins'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fin_topic_suffix',
            default_value='input'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fin_lower_joint_limit',
            default_value='-1.57'
        ),
        launch.actions.DeclareLaunchArgument(
            name='fin_upper_joint_limit',
            default_value='1.57'
        ),
        launch.actions.DeclareLaunchArgument(
            name='timeout',
            default_value='-1'
        ),
        launch.actions.DeclareLaunchArgument(
            name='update_rate',
            default_value='10'
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
