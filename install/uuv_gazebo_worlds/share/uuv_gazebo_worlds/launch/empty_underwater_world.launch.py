# <launch>
#     <arg name="gui" default="true"/>
#     <arg name="paused" default="false"/>
#     <arg name="set_timeout" default="false"/>
#     <arg name="timeout" default="0.0"/>

#     <!-- We resume the logic in empty_world.launch, changing only the name of the world to be launched -->
#     <include file="$(find gazebo_ros)/launch/empty_world.launch">
#         <arg name="world_name" value="worlds/empty_underwater.world"/>
#         <arg name="paused" value="$(arg paused)"/>
#         <arg name="use_sim_time" value="true"/>
#         <arg name="gui" value="$(arg gui)"/>
#         <arg name="headless" value="false"/>
#         <arg name="debug" value="false"/>
#         <arg name="verbose" value="true"/>
#     </include>

#     <include file="$(find uuv_assistants)/launch/publish_world_ned_frame.launch"/>

#     <node name="publish_world_models"
#         pkg="uuv_assistants"
#         type="publish_world_models.py"
#         output="screen">
#         <rosparam subst_value="true">
#             meshes:
#                 seafloor:
#                     plane: [2000, 2000, 0.1]
#                     pose:
#                         position: [0, 0, -100]
#                 north:
#                     plane: [0.1, 2000, 100]
#                     pose:
#                         position: [1000, 0, -50]
#                 south:
#                     plane: [0.1, 2000, 100]
#                     pose:
#                         position: [-1000, 0, -50]
#                 west:
#                     plane: [2000, 0.1, 100]
#                     pose:
#                         position: [0, -1000, -50]
#                 east:
#                     plane: [2000, 0.1, 100]
#                     pose:
#                         position: [0, 1000, -50]
#         </rosparam>
#     </node>

#     <group if="$(arg set_timeout)">
#         <include file="$(find uuv_assistants)/launch/set_simulation_timer.launch">
#             <arg name="timeout" value="$(arg timeout)"/>
#         </include>
#     </group>
# </launch>

import os
from launch import LaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.actions import IncludeLaunchDescription, ExecuteProcess
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource


def generate_launch_description():

    world = os.path.join(get_package_share_directory(
        'uuv_gazebo_worlds'), 'worlds', 'empty_underwater.world')
    #namespace = LaunchConfiguration('namespace')
    
    gazebo_cmd = ExecuteProcess(
        cmd=['gazebo', '--verbose', '-s', 'libgazebo_ros_factory.so', world],
        output='screen')

    ld = LaunchDescription()

    ld.add_action(gazebo_cmd)

    return ld