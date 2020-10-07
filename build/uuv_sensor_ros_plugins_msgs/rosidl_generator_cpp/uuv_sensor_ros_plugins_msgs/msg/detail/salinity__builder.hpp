// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/Salinity.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__BUILDER_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__BUILDER_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/salinity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_Salinity_unit
{
public:
  explicit Init_Salinity_unit(::uuv_sensor_ros_plugins_msgs::msg::Salinity & msg)
  : msg_(msg)
  {}
  ::uuv_sensor_ros_plugins_msgs::msg::Salinity unit(::uuv_sensor_ros_plugins_msgs::msg::Salinity::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::Salinity msg_;
};

class Init_Salinity_variance
{
public:
  explicit Init_Salinity_variance(::uuv_sensor_ros_plugins_msgs::msg::Salinity & msg)
  : msg_(msg)
  {}
  Init_Salinity_unit variance(::uuv_sensor_ros_plugins_msgs::msg::Salinity::_variance_type arg)
  {
    msg_.variance = std::move(arg);
    return Init_Salinity_unit(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::Salinity msg_;
};

class Init_Salinity_salinity
{
public:
  explicit Init_Salinity_salinity(::uuv_sensor_ros_plugins_msgs::msg::Salinity & msg)
  : msg_(msg)
  {}
  Init_Salinity_variance salinity(::uuv_sensor_ros_plugins_msgs::msg::Salinity::_salinity_type arg)
  {
    msg_.salinity = std::move(arg);
    return Init_Salinity_variance(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::Salinity msg_;
};

class Init_Salinity_header
{
public:
  Init_Salinity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Salinity_salinity header(::uuv_sensor_ros_plugins_msgs::msg::Salinity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Salinity_salinity(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::Salinity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::msg::Salinity>()
{
  return uuv_sensor_ros_plugins_msgs::msg::builder::Init_Salinity_header();
}

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__SALINITY__BUILDER_HPP_
