// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/SetThrusterEfficiency.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_EFFICIENCY__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_EFFICIENCY__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/set_thruster_efficiency__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetThrusterEfficiency_Request_efficiency
{
public:
  Init_SetThrusterEfficiency_Request_efficiency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Request efficiency(::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Request::_efficiency_type arg)
  {
    msg_.efficiency = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Request>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetThrusterEfficiency_Request_efficiency();
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_SetThrusterEfficiency_Response_success
{
public:
  Init_SetThrusterEfficiency_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Response success(::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_SetThrusterEfficiency_Response_success();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__SET_THRUSTER_EFFICIENCY__BUILDER_HPP_
