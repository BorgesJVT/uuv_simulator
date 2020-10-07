// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from uuv_sensor_ros_plugins_msgs:srv/ChangeSensorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__rosidl_typesupport_introspection_c.h"
#include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__functions.h"
#include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request__init(message_memory);
}

void ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_fini_function(void * message_memory)
{
  uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_member_array[1] = {
  {
    "on",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request, on),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_members = {
  "uuv_sensor_ros_plugins_msgs__srv",  // message namespace
  "ChangeSensorState_Request",  // message name
  1,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Request),
  ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_member_array,  // message members
  ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_type_support_handle = {
  0,
  &ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState_Request)() {
  if (!ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_type_support_handle.typesupport_identifier) {
    ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChangeSensorState_Request__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__functions.h"
// already included above
// #include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response__init(message_memory);
}

void ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_fini_function(void * message_memory)
{
  uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_members = {
  "uuv_sensor_ros_plugins_msgs__srv",  // message namespace
  "ChangeSensorState_Response",  // message name
  2,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs__srv__ChangeSensorState_Response),
  ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_member_array,  // message members
  ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_type_support_handle = {
  0,
  &ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState_Response)() {
  if (!ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_type_support_handle.typesupport_identifier) {
    ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ChangeSensorState_Response__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_sensor_ros_plugins_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_members = {
  "uuv_sensor_ros_plugins_msgs__srv",  // service namespace
  "ChangeSensorState",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_Request_message_type_support_handle,
  NULL  // response message
  // uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_Response_message_type_support_handle
};

static rosidl_service_type_support_t uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_type_support_handle = {
  0,
  &uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_uuv_sensor_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState)() {
  if (!uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_type_support_handle.typesupport_identifier) {
    uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_sensor_ros_plugins_msgs, srv, ChangeSensorState_Response)()->data;
  }

  return &uuv_sensor_ros_plugins_msgs__srv__detail__change_sensor_state__rosidl_typesupport_introspection_c__ChangeSensorState_service_type_support_handle;
}
