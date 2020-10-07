// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetFloat.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_float__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Request_data
{
public:
  Init_SetFloat_Request_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request data(::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Request>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetFloat_Request_data();
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetFloat_Response_message
{
public:
  explicit Init_SetFloat_Response_message(::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response & msg)
  : msg_(msg)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response message(::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response msg_;
};

class Init_SetFloat_Response_success
{
public:
  Init_SetFloat_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetFloat_Response_message success(::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetFloat_Response_message(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetFloat_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetFloat_Response_success();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_FLOAT__BUILDER_HPP_
