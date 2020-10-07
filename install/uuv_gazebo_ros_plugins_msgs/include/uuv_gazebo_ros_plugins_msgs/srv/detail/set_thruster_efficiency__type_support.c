// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetThrusterEfficiency.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request__init(message_memory);
}

void SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_member_array[1] = {
  {
    "efficiency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request, efficiency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "SetThrusterEfficiency_Request",  // message name
  1,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Request),
  SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_member_array,  // message members
  SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_type_support_handle = {
  0,
  &SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency_Request)() {
  if (!SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_type_support_handle.typesupport_identifier) {
    SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetThrusterEfficiency_Request__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__functions.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response__init(message_memory);
}

void SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "SetThrusterEfficiency_Response",  // message name
  1,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetThrusterEfficiency_Response),
  SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_member_array,  // message members
  SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_type_support_handle = {
  0,
  &SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency_Response)() {
  if (!SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_type_support_handle.typesupport_identifier) {
    SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetThrusterEfficiency_Response__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // service namespace
  "SetThrusterEfficiency",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Request_message_type_support_handle,
  NULL  // response message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetThrusterEfficiency_Response)()->data;
  }

  return &uuv_gazebo_ros_plugins_msgs__srv__detail__set_thruster_efficiency__rosidl_typesupport_introspection_c__SetThrusterEfficiency_service_type_support_handle;
}
