// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.hpp"
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

void UnderwaterObjectModel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel(_init);
}

void UnderwaterObjectModel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel *>(message_memory);
  typed_message->~UnderwaterObjectModel();
}

size_t size_function__UnderwaterObjectModel__added_mass(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UnderwaterObjectModel__added_mass(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__UnderwaterObjectModel__added_mass(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__UnderwaterObjectModel__added_mass(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UnderwaterObjectModel__linear_damping(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UnderwaterObjectModel__linear_damping(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__UnderwaterObjectModel__linear_damping(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__UnderwaterObjectModel__linear_damping(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UnderwaterObjectModel__linear_damping_forward_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UnderwaterObjectModel__linear_damping_forward_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__UnderwaterObjectModel__linear_damping_forward_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__UnderwaterObjectModel__linear_damping_forward_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UnderwaterObjectModel__quadratic_damping(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UnderwaterObjectModel__quadratic_damping(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__UnderwaterObjectModel__quadratic_damping(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void resize_function__UnderwaterObjectModel__quadratic_damping(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UnderwaterObjectModel_message_member_array[12] = {
  {
    "added_mass",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, added_mass),  // bytes offset in struct
    nullptr,  // default value
    size_function__UnderwaterObjectModel__added_mass,  // size() function pointer
    get_const_function__UnderwaterObjectModel__added_mass,  // get_const(index) function pointer
    get_function__UnderwaterObjectModel__added_mass,  // get(index) function pointer
    resize_function__UnderwaterObjectModel__added_mass  // resize(index) function pointer
  },
  {
    "linear_damping",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, linear_damping),  // bytes offset in struct
    nullptr,  // default value
    size_function__UnderwaterObjectModel__linear_damping,  // size() function pointer
    get_const_function__UnderwaterObjectModel__linear_damping,  // get_const(index) function pointer
    get_function__UnderwaterObjectModel__linear_damping,  // get(index) function pointer
    resize_function__UnderwaterObjectModel__linear_damping  // resize(index) function pointer
  },
  {
    "linear_damping_forward_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, linear_damping_forward_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__UnderwaterObjectModel__linear_damping_forward_speed,  // size() function pointer
    get_const_function__UnderwaterObjectModel__linear_damping_forward_speed,  // get_const(index) function pointer
    get_function__UnderwaterObjectModel__linear_damping_forward_speed,  // get(index) function pointer
    resize_function__UnderwaterObjectModel__linear_damping_forward_speed  // resize(index) function pointer
  },
  {
    "quadratic_damping",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, quadratic_damping),  // bytes offset in struct
    nullptr,  // default value
    size_function__UnderwaterObjectModel__quadratic_damping,  // size() function pointer
    get_const_function__UnderwaterObjectModel__quadratic_damping,  // get_const(index) function pointer
    get_function__UnderwaterObjectModel__quadratic_damping,  // get(index) function pointer
    resize_function__UnderwaterObjectModel__quadratic_damping  // resize(index) function pointer
  },
  {
    "volume",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, volume),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bbox_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, bbox_height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bbox_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, bbox_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bbox_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, bbox_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fluid_density",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, fluid_density),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cob",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, cob),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "neutrally_buoyant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, neutrally_buoyant),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inertia",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Inertia>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel, inertia),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UnderwaterObjectModel_message_members = {
  "uuv_gazebo_ros_plugins_msgs::msg",  // message namespace
  "UnderwaterObjectModel",  // message name
  12,  // number of fields
  sizeof(uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel),
  UnderwaterObjectModel_message_member_array,  // message members
  UnderwaterObjectModel_init_function,  // function to initialize message memory (memory has to be allocated)
  UnderwaterObjectModel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UnderwaterObjectModel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UnderwaterObjectModel_message_members,
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
get_message_type_support_handle<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return &::uuv_gazebo_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::UnderwaterObjectModel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, uuv_gazebo_ros_plugins_msgs, msg, UnderwaterObjectModel)() {
  return &::uuv_gazebo_ros_plugins_msgs::msg::rosidl_typesupport_introspection_cpp::UnderwaterObjectModel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
