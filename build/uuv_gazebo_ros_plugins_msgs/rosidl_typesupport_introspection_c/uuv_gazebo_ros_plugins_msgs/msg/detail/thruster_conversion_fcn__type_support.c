// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.h"


// Include directives for member types
// Member `function_name`
// Member `tags`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
// Member `lookup_table_input`
// Member `lookup_table_output`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__init(message_memory);
}

void ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_member_array[5] = {
  {
    "function_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, function_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, tags),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lookup_table_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, lookup_table_input),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lookup_table_output",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn, lookup_table_output),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_members = {
  "uuv_gazebo_ros_plugins_msgs__msg",  // message namespace
  "ThrusterConversionFcn",  // message name
  5,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__msg__ThrusterConversionFcn),
  ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_member_array,  // message members
  ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_init_function,  // function to initialize message memory (memory has to be allocated)
  ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle = {
  0,
  &ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, msg, ThrusterConversionFcn)() {
  if (!ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle.typesupport_identifier) {
    ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ThrusterConversionFcn__rosidl_typesupport_introspection_c__ThrusterConversionFcn_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
