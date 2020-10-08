// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return "uuv_gazebo_ros_plugins_msgs/msg/ThrusterConversionFcn";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__TRAITS_HPP_
