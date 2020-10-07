// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_sensor_ros_plugins_msgs:msg/PositionWithCovarianceStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
#define UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__BUILDER_HPP_

#include "uuv_sensor_ros_plugins_msgs/msg/detail/position_with_covariance_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_sensor_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionWithCovarianceStamped_pos
{
public:
  explicit Init_PositionWithCovarianceStamped_pos(::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped & msg)
  : msg_(msg)
  {}
  ::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped pos(::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped msg_;
};

class Init_PositionWithCovarianceStamped_header
{
public:
  Init_PositionWithCovarianceStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionWithCovarianceStamped_pos header(::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PositionWithCovarianceStamped_pos(msg_);
  }

private:
  ::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_sensor_ros_plugins_msgs::msg::PositionWithCovarianceStamped>()
{
  return uuv_sensor_ros_plugins_msgs::msg::builder::Init_PositionWithCovarianceStamped_header();
}

}  // namespace uuv_sensor_ros_plugins_msgs

#endif  // UUV_SENSOR_ROS_PLUGINS_MSGS__MSG__DETAIL__POSITION_WITH_COVARIANCE_STAMPED__BUILDER_HPP_
