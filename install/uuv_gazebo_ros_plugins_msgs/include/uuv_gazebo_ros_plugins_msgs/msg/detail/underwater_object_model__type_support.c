// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.h"


// Include directives for member types
// Member `added_mass`
// Member `linear_damping`
// Member `linear_damping_forward_speed`
// Member `quadratic_damping`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `cob`
#include "geometry_msgs/msg/vector3.h"
// Member `cob`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `inertia`
#include "geometry_msgs/msg/inertia.h"
// Member `inertia`
#include "geometry_msgs/msg/detail/inertia__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__init(message_memory);
}

void UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array[12] = {
  {
    "added_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, added_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, linear_damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linear_damping_forward_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, linear_damping_forward_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quadratic_damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, quadratic_damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "volume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, volume),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, bbox_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, bbox_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, bbox_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fluid_density",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, fluid_density),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cob",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, cob),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "neutrally_buoyant",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, neutrally_buoyant),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inertia",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel, inertia),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_members = {
  "uuv_gazebo_ros_plugins_msgs__msg",  // message namespace
  "UnderwaterObjectModel",  // message name
  12,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__msg__UnderwaterObjectModel),
  UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array,  // message members
  UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_init_function,  // function to initialize message memory (memory has to be allocated)
  UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle = {
  0,
  &UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)() {
  UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Inertia)();
  if (!UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle.typesupport_identifier) {
    UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &UnderwaterObjectModel__rosidl_typesupport_introspection_c__UnderwaterObjectModel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
