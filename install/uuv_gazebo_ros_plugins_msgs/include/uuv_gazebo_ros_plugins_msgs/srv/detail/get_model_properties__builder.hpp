// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetModelProperties.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_model_properties__struct.hpp"
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
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request>()
{
  return ::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetModelProperties_Response_models
{
public:
  explicit Init_GetModelProperties_Response_models(::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response & msg)
  : msg_(msg)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response models(::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response::_models_type arg)
  {
    msg_.models = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response msg_;
};

class Init_GetModelProperties_Response_link_names
{
public:
  Init_GetModelProperties_Response_link_names()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetModelProperties_Response_models link_names(::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response::_link_names_type arg)
  {
    msg_.link_names = std::move(arg);
    return Init_GetModelProperties_Response_models(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetModelProperties_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_GetModelProperties_Response_link_names();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_MODEL_PROPERTIES__BUILDER_HPP_
