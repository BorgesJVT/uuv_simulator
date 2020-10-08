// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_world_ros_plugins_msgs:srv/SetCurrentDirection.idl
// generated code does not contain a copyright notice

#ifndef UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__TRAITS_HPP_
#define UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__TRAITS_HPP_

#include "uuv_world_ros_plugins_msgs/srv/detail/set_current_direction__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentDirection_Request";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentDirection_Response";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>()
{
  return "uuv_world_ros_plugins_msgs::srv::SetCurrentDirection";
}

template<>
inline const char * name<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>()
{
  return "uuv_world_ros_plugins_msgs/srv/SetCurrentDirection";
}

template<>
struct has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>::value &&
    has_fixed_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>::value &&
    has_bounded_size<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>::value
  >
{
};

template<>
struct is_service<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_WORLD_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_CURRENT_DIRECTION__TRAITS_HPP_
