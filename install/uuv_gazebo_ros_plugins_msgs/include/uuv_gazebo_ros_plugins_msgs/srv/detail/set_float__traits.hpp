// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_float__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/SetFloat_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/SetFloat_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::SetFloat>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::SetFloat";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::SetFloat>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/SetFloat";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::SetFloat>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__TRAITS_HPP_
