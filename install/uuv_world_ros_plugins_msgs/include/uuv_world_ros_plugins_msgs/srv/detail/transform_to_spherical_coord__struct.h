// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_world_ros_plugins_msgs:srv/TransformToSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_TO_SPHERICAL_COORD__STRUCT_H_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_TO_SPHERICAL_COORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'input'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in srv/TransformToSphericalCoord in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request
{
  geometry_msgs__msg__Vector3 input;
} uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request__Sequence
{
  uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TransformToSphericalCoord in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response
{
  double latitude_deg;
  double longitude_deg;
  double altitude;
} uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response.
typedef struct uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response__Sequence
{
  uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__TransformToSphericalCoord_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__TRANSFORM_TO_SPHERICAL_COORD__STRUCT_H_
