// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetUseGlobalCurrentVel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__rosidl_typesupport_introspection_c.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__functions.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__init(message_memory);
}

void SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_member_array[1] = {
  {
    "use_global",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request, use_global),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "SetUseGlobalCurrentVel_Request",  // message name
  1,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Request),
  SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_member_array,  // message members
  SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_type_support_handle = {
  0,
  &SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel_Request)() {
  if (!SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_type_support_handle.typesupport_identifier) {
    SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetUseGlobalCurrentVel_Request__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__functions.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__init(message_memory);
}

void SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_fini_function(void * message_memory)
{
  uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // message namespace
  "SetUseGlobalCurrentVel_Response",  // message name
  1,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs__srv__SetUseGlobalCurrentVel_Response),
  SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_member_array,  // message members
  SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_type_support_handle = {
  0,
  &SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel_Response)() {
  if (!SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_type_support_handle.typesupport_identifier) {
    SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetUseGlobalCurrentVel_Response__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_members = {
  "uuv_gazebo_ros_plugins_msgs__srv",  // service namespace
  "SetUseGlobalCurrentVel",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Request_message_type_support_handle,
  NULL  // response message
  // uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_type_support_handle = {
  0,
  &uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel)() {
  if (!uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_type_support_handle.typesupport_identifier) {
    uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, SetUseGlobalCurrentVel_Response)()->data;
  }

  return &uuv_gazebo_ros_plugins_msgs__srv__detail__set_use_global_current_vel__rosidl_typesupport_introspection_c__SetUseGlobalCurrentVel_service_type_support_handle;
}
