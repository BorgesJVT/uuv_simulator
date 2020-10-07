// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/FloatStamped.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/float_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_FloatStamped_data
{
public:
  explicit Init_FloatStamped_data(::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped & msg)
  : msg_(msg)
  {}
  ::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped data(::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped msg_;
};

class Init_FloatStamped_header
{
public:
  Init_FloatStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FloatStamped_data header(::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FloatStamped_data(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>()
{
  return uuv_gazebo_ros_plugins_msgs::msg::builder::Init_FloatStamped_header();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__FLOAT_STAMPED__BUILDER_HPP_
