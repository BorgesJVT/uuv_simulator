// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__STRUCT_H_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'added_mass'
// Member 'linear_damping'
// Member 'linear_damping_forward_speed'
// Member 'quadratic_damping'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'cob'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'inertia'
#include "geometry_msgs/msg/detail/inertia__struct.h"

// Struct defined in msg/UnderwaterObjectModel in the package uuv_gazebo_ros_plugins_msgs.
typedef struct uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel
{
  rosidl_runtime_c__double__Sequence added_mass;
  rosidl_runtime_c__double__Sequence linear_damping;
  rosidl_runtime_c__double__Sequence linear_damping_forward_speed;
  rosidl_runtime_c__double__Sequence quadratic_damping;
  double volume;
  double bbox_height;
  double bbox_length;
  double bbox_width;
  double fluid_density;
  geometry_msgs__msg__Vector3 cob;
  bool neutrally_buoyant;
  geometry_msgs__msg__Inertia inertia;
} uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel;

// Struct for a sequence of uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel.
typedef struct uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__STRUCT_H_
