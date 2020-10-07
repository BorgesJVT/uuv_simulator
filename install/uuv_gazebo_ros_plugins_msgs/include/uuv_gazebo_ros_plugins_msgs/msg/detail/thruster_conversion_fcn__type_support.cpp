// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ThrusterConversionFcn_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn(_init);
}

void ThrusterConversionFcn_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn *>(message_memory);
  typed_message->~ThrusterConversionFcn();
}

size_t size_function__ThrusterConversionFcn__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterConversionFcn__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterConversionFcn__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterConversionFcn__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterConversionFcn__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterConversionFcn__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterConversionFcn__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterConversionFcn__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterConversionFcn__lookup_table_input(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterConversionFcn__lookup_table_input(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterConversionFcn__lookup_table_input(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterConversionFcn__lookup_table_input(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ThrusterConversionFcn__lookup_table_output(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ThrusterConversionFcn__lookup_table_output(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ThrusterConversionFcn__lookup_table_output(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__ThrusterConversionFcn__lookup_table_output(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ThrusterConversionFcn_message_member_array[5] = {
  {
    "function_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn, function_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterConversionFcn__tags,  // size() function pointer
    get_const_function__ThrusterConversionFcn__tags,  // get_const(index) function pointer
    get_function__ThrusterConversionFcn__tags,  // get(index) function pointer
    resize_function__ThrusterConversionFcn__tags  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterConversionFcn__data,  // size() function pointer
    get_const_function__ThrusterConversionFcn__data,  // get_const(index) function pointer
    get_function__ThrusterConversionFcn__data,  // get(index) function pointer
    resize_function__ThrusterConversionFcn__data  // resize(index) function pointer
  },
  {
    "lookup_table_input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn, lookup_table_input),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterConversionFcn__lookup_table_input,  // size() function pointer
    get_const_function__ThrusterConversionFcn__lookup_table_input,  // get_const(index) function pointer
    get_function__ThrusterConversionFcn__lookup_table_input,  // get(index) function pointer
    resize_function__ThrusterConversionFcn__lookup_table_input  // resize(index) function pointer
  },
  {
    "lookup_table_output",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn, lookup_table_output),  // bytes offset in struct
    nullptr,  // default value
    size_function__ThrusterConversionFcn__lookup_table_output,  // size() function pointer
    get_const_function__ThrusterConversionFcn__lookup_table_output,  // get_const(index) function pointer
    get_function__ThrusterConversionFcn__lookup_table_output,  // get(index) function pointer
    resize_function__ThrusterConversionFcn__lookup_table_output  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ThrusterConversionFcn_message_members = {
  "uuv_gazebo_ros_plugins_msgs::msg",  // message namespace
  "ThrusterConversionFcn",  // message name
  5,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn),
  ThrusterConversionFcn_message_member_array,  // message members
  ThrusterConversionFcn_init_function,  // function to initialize message memory (memory has to be allocated)
  ThrusterConversionFcn_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ThrusterConversionFcn_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ThrusterConversionFcn_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return &::uuv_gazebo_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::ThrusterConversionFcn_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_gazebo_ros_plugins_msgs, msg, ThrusterConversionFcn)() {
  return &::uuv_gazebo_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::ThrusterConversionFcn_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
