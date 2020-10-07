// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__rosidl_typesupport_introspection_c.h"
#include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__functions.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__init(message_memory);
}

void SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_fini_function(void * message_memory)
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_member_array[1] = {
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_members = {
  "uuv_world_ros_plugins_msgs__srv",  // message namespace
  "SetCurrentDirection_Request",  // message name
  1,  // number of fields
  sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Request),
  SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_member_array,  // message members
  SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_type_support_handle = {
  0,
  &SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_world_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Request)() {
  if (!SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_type_support_handle.typesupport_identifier) {
    SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetCurrentDirection_Request__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__functions.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__init(message_memory);
}

void SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_fini_function(void * message_memory)
{
  uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_members = {
  "uuv_world_ros_plugins_msgs__srv",  // message namespace
  "SetCurrentDirection_Response",  // message name
  1,  // number of fields
  sizeof(uuv_world_ros_plugins_msgs__srv__SetCurrentDirection_Response),
  SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_member_array,  // message members
  SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_type_support_handle = {
  0,
  &SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_world_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Response)() {
  if (!SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_type_support_handle.typesupport_identifier) {
    SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SetCurrentDirection_Response__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_members = {
  "uuv_world_ros_plugins_msgs__srv",  // service namespace
  "SetCurrentDirection",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_Request_message_type_support_handle,
  NULL  // response message
  // uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_type_support_handle = {
  0,
  &uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_world_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection)() {
  if (!uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_type_support_handle.typesupport_identifier) {
    uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Response)()->data;
  }

  return &uuv_world_ros_plugins_msgs__srv__detail__set_current_direction__rosidl_typesupport_introspection_c__SetCurrentDirection_service_type_support_handle;
}
