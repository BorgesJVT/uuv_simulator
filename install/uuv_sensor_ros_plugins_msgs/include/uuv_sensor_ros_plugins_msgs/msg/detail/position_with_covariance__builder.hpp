// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovariance.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__BUILDER_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__BUILDER_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionWithCovariance_covariance
{
public:
  explicit Init_PositionWithCovariance_covariance(::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance & msg)
  : msg_(msg)
  {}
  ::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance covariance(::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance::_covariance_type arg)
  {
    msg_.covariance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance msg_;
};

class Init_PositionWithCovariance_pos
{
public:
  Init_PositionWithCovariance_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionWithCovariance_covariance pos(::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PositionWithCovariance_covariance(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovariance>()
{
  return uuv_sensor_ros_plugins_msgs::msg::builder::Init_PositionWithCovariance_pos();
}

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE__BUILDER_HPP_
