// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCurrentDirection_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentDirection_Request_type_support_ids_t;

static const _SetCurrentDirection_Request_type_support_ids_t _SetCurrentDirection_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCurrentDirection_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentDirection_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentDirection_Request_type_support_symbol_names_t _SetCurrentDirection_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Request)),
  }
};

typedef struct _SetCurrentDirection_Request_type_support_data_t
{
  void * data[2];
} _SetCurrentDirection_Request_type_support_data_t;

static _SetCurrentDirection_Request_type_support_data_t _SetCurrentDirection_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentDirection_Request_message_typesupport_map = {
  2,
  "uuv_world_ros_plugins_msgs",
  &_SetCurrentDirection_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentDirection_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentDirection_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCurrentDirection_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentDirection_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>()
{
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_cpp::SetCurrentDirection_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Request)() {
  return get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCurrentDirection_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentDirection_Response_type_support_ids_t;

static const _SetCurrentDirection_Response_type_support_ids_t _SetCurrentDirection_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCurrentDirection_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentDirection_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentDirection_Response_type_support_symbol_names_t _SetCurrentDirection_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Response)),
  }
};

typedef struct _SetCurrentDirection_Response_type_support_data_t
{
  void * data[2];
} _SetCurrentDirection_Response_type_support_data_t;

static _SetCurrentDirection_Response_type_support_data_t _SetCurrentDirection_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentDirection_Response_message_typesupport_map = {
  2,
  "uuv_world_ros_plugins_msgs",
  &_SetCurrentDirection_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentDirection_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentDirection_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetCurrentDirection_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentDirection_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>()
{
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_cpp::SetCurrentDirection_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection_Response)() {
  return get_message_type_support_handle<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace uuv_world_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetCurrentDirection_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetCurrentDirection_type_support_ids_t;

static const _SetCurrentDirection_type_support_ids_t _SetCurrentDirection_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetCurrentDirection_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetCurrentDirection_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetCurrentDirection_type_support_symbol_names_t _SetCurrentDirection_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_world_ros_plugins_msgs, srv, SetCurrentDirection)),
  }
};

typedef struct _SetCurrentDirection_type_support_data_t
{
  void * data[2];
} _SetCurrentDirection_type_support_data_t;

static _SetCurrentDirection_type_support_data_t _SetCurrentDirection_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetCurrentDirection_service_typesupport_map = {
  2,
  "uuv_world_ros_plugins_msgs",
  &_SetCurrentDirection_service_typesupport_ids.typesupport_identifier[0],
  &_SetCurrentDirection_service_typesupport_symbol_names.symbol_name[0],
  &_SetCurrentDirection_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetCurrentDirection_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetCurrentDirection_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace uuv_world_ros_plugins_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>()
{
  return &::uuv_world_ros_plugins_msgs::srv::rosidl_typesupport_cpp::SetCurrentDirection_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
