// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterEfficiency.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_efficiency__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetThrusterEfficiency_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetThrusterEfficiency_Request_type_support_ids_t;

static const _GetThrusterEfficiency_Request_type_support_ids_t _GetThrusterEfficiency_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetThrusterEfficiency_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetThrusterEfficiency_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetThrusterEfficiency_Request_type_support_symbol_names_t _GetThrusterEfficiency_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency_Request)),
  }
};

typedef struct _GetThrusterEfficiency_Request_type_support_data_t
{
  void * data[2];
} _GetThrusterEfficiency_Request_type_support_data_t;

static _GetThrusterEfficiency_Request_type_support_data_t _GetThrusterEfficiency_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetThrusterEfficiency_Request_message_typesupport_map = {
  2,
  "uuv_gazebo_ros_plugins_msgs",
  &_GetThrusterEfficiency_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetThrusterEfficiency_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetThrusterEfficiency_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetThrusterEfficiency_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetThrusterEfficiency_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency_Request)() {
  return &::uuv_gazebo_ros_plugins_msgs::srv::rosidl_typesupport_c::GetThrusterEfficiency_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_efficiency__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetThrusterEfficiency_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetThrusterEfficiency_Response_type_support_ids_t;

static const _GetThrusterEfficiency_Response_type_support_ids_t _GetThrusterEfficiency_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetThrusterEfficiency_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetThrusterEfficiency_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetThrusterEfficiency_Response_type_support_symbol_names_t _GetThrusterEfficiency_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency_Response)),
  }
};

typedef struct _GetThrusterEfficiency_Response_type_support_data_t
{
  void * data[2];
} _GetThrusterEfficiency_Response_type_support_data_t;

static _GetThrusterEfficiency_Response_type_support_data_t _GetThrusterEfficiency_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetThrusterEfficiency_Response_message_typesupport_map = {
  2,
  "uuv_gazebo_ros_plugins_msgs",
  &_GetThrusterEfficiency_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetThrusterEfficiency_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetThrusterEfficiency_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetThrusterEfficiency_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetThrusterEfficiency_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency_Response)() {
  return &::uuv_gazebo_ros_plugins_msgs::srv::rosidl_typesupport_c::GetThrusterEfficiency_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetThrusterEfficiency_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetThrusterEfficiency_type_support_ids_t;

static const _GetThrusterEfficiency_type_support_ids_t _GetThrusterEfficiency_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetThrusterEfficiency_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetThrusterEfficiency_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetThrusterEfficiency_type_support_symbol_names_t _GetThrusterEfficiency_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency)),
  }
};

typedef struct _GetThrusterEfficiency_type_support_data_t
{
  void * data[2];
} _GetThrusterEfficiency_type_support_data_t;

static _GetThrusterEfficiency_type_support_data_t _GetThrusterEfficiency_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetThrusterEfficiency_service_typesupport_map = {
  2,
  "uuv_gazebo_ros_plugins_msgs",
  &_GetThrusterEfficiency_service_typesupport_ids.typesupport_identifier[0],
  &_GetThrusterEfficiency_service_typesupport_symbol_names.symbol_name[0],
  &_GetThrusterEfficiency_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetThrusterEfficiency_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetThrusterEfficiency_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_uuv_gazebo_ros_plugins_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, uuv_gazebo_ros_plugins_msgs, srv, GetThrusterEfficiency)() {
  return &::uuv_gazebo_ros_plugins_msgs::srv::rosidl_typesupport_c::GetThrusterEfficiency_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
