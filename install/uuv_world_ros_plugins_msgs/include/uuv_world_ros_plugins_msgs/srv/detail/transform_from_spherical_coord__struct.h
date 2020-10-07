// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformFromSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__STRUCT_H_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/TransformFromSphericalCoord in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request
{
  double latitude_deg;
  double longitude_deg;
  double altitude;
} uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request__Sequence
{
  uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'output'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in srv/TransformFromSphericalCoord in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response
{
  geometry_msgs__msg__Vector3 output;
} uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response__Sequence
{
  uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__TransformFromSphericalCoord_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_FROM_SPHERICAL_COORD__STRUCT_H_
