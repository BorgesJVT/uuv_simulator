// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/UnderwaterObjectModel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/underwater_object_model__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'cob'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'inertia'
#include "geometry_msgs/msg/detail/inertia__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return "uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>()
{
  return "uuv_gazebo_ros_plugins_msgs/msg/UnderwaterObjectModel";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::msg::UnderwaterObjectModel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__UNDERWATER_OBJECT_MODEL__TRAITS_HPP_
