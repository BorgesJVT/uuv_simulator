// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:srv/GetListParam.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_LIST_PARAM__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_LIST_PARAM__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/srv/detail/get_list_param__struct.hpp"
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
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Request>()
{
  return ::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace uuv_gazebo_ros_plugins_msgs


namespace uuv_gazebo_ros_plugins_msgs
{

namespace srv
{

namespace builder
{

class Init_GetListParam_Response_data
{
public:
  explicit Init_GetListParam_Response_data(::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response & msg)
  : msg_(msg)
  {}
  ::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response data(::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response msg_;
};

class Init_GetListParam_Response_tags
{
public:
  explicit Init_GetListParam_Response_tags(::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response & msg)
  : msg_(msg)
  {}
  Init_GetListParam_Response_data tags(::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_GetListParam_Response_data(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response msg_;
};

class Init_GetListParam_Response_description
{
public:
  Init_GetListParam_Response_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetListParam_Response_tags description(::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_GetListParam_Response_tags(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::srv::GetListParam_Response>()
{
  return uuv_gazebo_ros_plugins_msgs::srv::builder::Init_GetListParam_Response_description();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__SRV__DETAIL__GET_LIST_PARAM__BUILDER_HPP_
