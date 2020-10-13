import os
import sys

import launch
import launch_ros.actions


def generate_launch_description():
    ld = launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            name='namespace',
            default_value='rexrov'
        ),
        launch_ros.actions.Node(
            package='uuv_descriptions',
            executable='uuv_message_to_tf',
            name=launch.substitutions.LaunchConfiguration('namespace'),
            output='screen',
            parameters=[
                {
                    '~odometry_topic': 'rexrov/pose_gt'
                },
                {
                    '~frame_id': '/world'
                },
                {
                    '~stabilized_frame_id': 'rexrov/base_stabilized'
                },
                {
                    '~footprint_frame_id': 'rexrov/base_footprint'
                },
                {
                    '~child_frame_id': 'rexrov/base_link'
                }
            ]
        )
    ])
    return ld


if __name__ == '__main__':
    generate_launch_description()
