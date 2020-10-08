// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:srv/ChangeSensorState.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__TRAITS_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__TRAITS_HPP_

#include "uuv_sensor_ros_plugins_msgs/srv/detail/change_sensor_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>()
{
  return "uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>()
{
  return "uuv_sensor_ros_plugins_msgs/srv/ChangeSensorState_Request";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>()
{
  return "uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>()
{
  return "uuv_sensor_ros_plugins_msgs/srv/ChangeSensorState_Response";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>()
{
  return "uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState";
}

template<>
inline const char * name<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>()
{
  return "uuv_sensor_ros_plugins_msgs/srv/ChangeSensorState";
}

template<>
struct has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>
  : std::integral_constant<
    bool,
    has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>::value &&
    has_fixed_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>::value
  >
{
};

template<>
struct has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>
  : std::integral_constant<
    bool,
    has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>::value &&
    has_bounded_size<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>::value
  >
{
};

template<>
struct is_service<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState>
  : std::true_type
{
};

template<>
struct is_service_request<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<uuv_sensor_ros_plugins_msgs::srv::ChangeSensorState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__SRV__DETAIL__CHANGE_SENSOR_STATE__TRAITS_HPP_
