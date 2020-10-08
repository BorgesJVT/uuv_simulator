// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetThrusterState.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_STATE__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_STATE__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_thruster_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request>()
{
  return ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetThrusterState_Response_is_on
{
public:
  Init_GetThrusterState_Response_is_on()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response is_on(::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response::_is_on_type arg)
  {
    msg_.is_on = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_GetThrusterState_Response_is_on();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_THRUSTER_STATE__BUILDER_HPP_
