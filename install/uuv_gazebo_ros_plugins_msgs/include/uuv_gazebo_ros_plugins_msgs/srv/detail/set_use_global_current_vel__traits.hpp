// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetUseGlobalCurrentVel.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__TRAITS_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__TRAITS_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_use_global_current_vel__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/SetUseGlobalCurrentVel_Request";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/SetUseGlobalCurrentVel_Response";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel>()
{
  return "uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel";
}

template<>
inline const char * name<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel>()
{
  return "uuv_gazebo_ros_plugins_msgs/srv/SetUseGlobalCurrentVel";
}

template<>
struct has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>::value &&
    has_fixed_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>::value &&
    has_bounded_size<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>::value
  >
{
};

template<>
struct is_service<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_gazebo_ros_plugins_msgs::srv::SetUseGlobalCurrentVel_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_USE_GLOBAL_CURRENT_VEL__TRAITS_HPP_
