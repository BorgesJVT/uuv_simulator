// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from uuv_world_ros_plugins_msgs:srv/SetOriginSphericalCoord.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__STRUCT_H_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/SetOriginSphericalCoord in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request
{
  double latitude_deg;
  double longitude_deg;
  double altitude;
} uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request.
typedef struct uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request__Sequence
{
  uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SetOriginSphericalCoord in the package uuv_world_ros_plugins_msgs.
typedef struct uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response
{
  bool success;
} uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response;

// Struct for a sequence of uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response.
typedef struct uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response__Sequence
{
  uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} uuv_world_ros_plugins_msgs__srv__SetOriginSphericalCoord_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_ORIGIN_SPHERICAL_COORD__STRUCT_H_
