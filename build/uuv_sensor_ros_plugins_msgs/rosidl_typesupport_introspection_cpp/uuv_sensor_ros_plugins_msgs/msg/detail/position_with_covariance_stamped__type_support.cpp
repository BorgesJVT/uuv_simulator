// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PositionWithCovarianceStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped(_init);
}

void PositionWithCovarianceStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped *>(message_memory);
  typed_message->~PositionWithCovarianceStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PositionWithCovarianceStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped, pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PositionWithCovarianceStamped_message_members = {
  "uuv_sensor_ros_plugins_msgs::msg",  // message namespace
  "PositionWithCovarianceStamped",  // message name
  2,  // number of fields
  sizeof(uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped),
  PositionWithCovarianceStamped_message_member_array,  // message members
  PositionWithCovarianceStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  PositionWithCovarianceStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PositionWithCovarianceStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PositionWithCovarianceStamped_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace uuv_sensor_ros_plugins_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>()
{
  return &::uuv_sensor_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::PositionWithCovarianceStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_sensor_ros_plugins_msgs, msg, PositionWithCovarianceStamped)() {
  return &::uuv_sensor_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::PositionWithCovarianceStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
