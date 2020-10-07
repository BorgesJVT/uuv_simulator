// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetListParam.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/type_support_map.h"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetListParam_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetListParam_Request_type_support_ids_t;

static const _GetListParam_Request_type_support_ids_t _GetListParam_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetListParam_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetListParam_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetListParam_Request_type_support_symbol_names_t _GetListParam_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Request)),
  }
};

typedef struct _GetListParam_Request_type_support_data_t
{
  void * data[2];
} _GetListParam_Request_type_support_data_t;

static _GetListParam_Request_type_support_data_t _GetListParam_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetListParam_Request_message_typesupport_map = {
  2,
  "uuv_gazebo_ros_plugins_msgs",
  &_GetListParam_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetListParam_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetListParam_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetListParam_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetListParam_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Request>()
{
  return &::uuv_gazebo_ros_plugins_msgs::srv::rosidl_typesupport_cpp::GetListParam_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Request)() {
  return get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Request>();
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
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__struct.hpp"
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

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetListParam_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetListParam_Response_type_support_ids_t;

static const _GetListParam_Response_type_support_ids_t _GetListParam_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetListParam_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetListParam_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetListParam_Response_type_support_symbol_names_t _GetListParam_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Response)),
  }
};

typedef struct _GetListParam_Response_type_support_data_t
{
  void * data[2];
} _GetListParam_Response_type_support_data_t;

static _GetListParam_Response_type_support_data_t _GetListParam_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetListParam_Response_message_typesupport_map = {
  2,
  "uuv_gazebo_ros_plugins_msgs",
  &_GetListParam_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetListParam_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetListParam_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetListParam_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetListParam_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response>()
{
  return &::uuv_gazebo_ros_plugins_msgs::srv::rosidl_typesupport_cpp::GetListParam_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam_Response)() {
  return get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__struct.hpp"
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

namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _GetListParam_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetListParam_type_support_ids_t;

static const _GetListParam_type_support_ids_t _GetListParam_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _GetListParam_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetListParam_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetListParam_type_support_symbol_names_t _GetListParam_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_gazebo_ros_plugins_msgs, srv, GetListParam)),
  }
};

typedef struct _GetListParam_type_support_data_t
{
  void * data[2];
} _GetListParam_type_support_data_t;

static _GetListParam_type_support_data_t _GetListParam_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetListParam_service_typesupport_map = {
  2,
  "uuv_gazebo_ros_plugins_msgs",
  &_GetListParam_service_typesupport_ids.typesupport_identifier[0],
  &_GetListParam_service_typesupport_symbol_names.symbol_name[0],
  &_GetListParam_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetListParam_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetListParam_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace uuv_gazebo_ros_plugins_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<uuv_gazebo_ros_plugins_msgs::srv::GetListParam>()
{
  return &::uuv_gazebo_ros_plugins_msgs::srv::rosidl_typesupport_cpp::GetListParam_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
