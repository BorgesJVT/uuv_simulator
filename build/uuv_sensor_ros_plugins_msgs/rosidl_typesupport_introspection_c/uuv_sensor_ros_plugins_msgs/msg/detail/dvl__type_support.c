// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_sensor_ros_plugins_msgs:msg/DVL.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl__rosidl_typesupport_introspection_c.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl__functions.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/vector3.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `beams`
#include "uuv_sensor_ros_plugins_msgs/msg/dvl_beam.h"
// Member `beams`
#include "uuv_sensor_ros_plugins_msgs/msg/detail/dvl_beam__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void DVL__rosidl_typesupport_introspection_c__DVL_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_sensor_ros_plugins_msgs__msg__DVL__init(message_memory);
}

void DVL__rosidl_typesupport_introspection_c__DVL_fini_function(void * message_memory)
{
  uuv_sensor_ros_plugins_msgs__msg__DVL__fini(message_memory);
}

size_t DVL__rosidl_typesupport_introspection_c__size_function__DVLBeam__beams(
  const void * untyped_member)
{
  const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * member =
    (const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *)(untyped_member);
  return member->size;
}

const void * DVL__rosidl_typesupport_introspection_c__get_const_function__DVLBeam__beams(
  const void * untyped_member, size_t index)
{
  const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * member =
    (const uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *)(untyped_member);
  return &member->data[index];
}

void * DVL__rosidl_typesupport_introspection_c__get_function__DVLBeam__beams(
  void * untyped_member, size_t index)
{
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * member =
    (uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *)(untyped_member);
  return &member->data[index];
}

bool DVL__rosidl_typesupport_introspection_c__resize_function__DVLBeam__beams(
  void * untyped_member, size_t size)
{
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence * member =
    (uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence *)(untyped_member);
  uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__fini(member);
  return uuv_sensor_ros_plugins_msgs__msg__DVLBeam__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__DVL, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__DVL, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_covariance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__DVL, velocity_covariance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__DVL, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "beams",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__msg__DVL, beams),  // bytes offset in struct
    NULL,  // default value
    DVL__rosidl_typesupport_introspection_c__size_function__DVLBeam__beams,  // size() function pointer
    DVL__rosidl_typesupport_introspection_c__get_const_function__DVLBeam__beams,  // get_const(index) function pointer
    DVL__rosidl_typesupport_introspection_c__get_function__DVLBeam__beams,  // get(index) function pointer
    DVL__rosidl_typesupport_introspection_c__resize_function__DVLBeam__beams  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers DVL__rosidl_typesupport_introspection_c__DVL_message_members = {
  "uuv_sensor_ros_plugins_msgs__msg",  // message namespace
  "DVL",  // message name
  5,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs__msg__DVL),
  DVL__rosidl_typesupport_introspection_c__DVL_message_member_array,  // message members
  DVL__rosidl_typesupport_introspection_c__DVL_init_function,  // function to initialize message memory (memory has to be allocated)
  DVL__rosidl_typesupport_introspection_c__DVL_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle = {
  0,
  &DVL__rosidl_typesupport_introspection_c__DVL_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, msg, DVL)() {
  DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  DVL__rosidl_typesupport_introspection_c__DVL_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, msg, DVLBeam)();
  if (!DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle.typesupport_identifier) {
    DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &DVL__rosidl_typesupport_introspection_c__DVL_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
