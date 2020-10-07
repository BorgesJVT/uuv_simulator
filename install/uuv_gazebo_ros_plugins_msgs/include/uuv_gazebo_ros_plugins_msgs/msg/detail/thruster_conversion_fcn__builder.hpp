// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from uuv_gazebo_ros_plugins_msgs:msg/ThrusterConversionFcn.idl
// generated code does not contain a copyright notice

#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__BUILDER_HPP_
#define UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__BUILDER_HPP_

#include "uuv_gazebo_ros_plugins_msgs/msg/detail/thruster_conversion_fcn__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace uuv_gazebo_ros_plugins_msgs
{

namespace msg
{

namespace builder
{

class Init_ThrusterConversionFcn_lookup_table_output
{
public:
  explicit Init_ThrusterConversionFcn_lookup_table_output(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & msg)
  : msg_(msg)
  {}
  ::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn lookup_table_output(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn::_lookup_table_output_type arg)
  {
    msg_.lookup_table_output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn msg_;
};

class Init_ThrusterConversionFcn_lookup_table_input
{
public:
  explicit Init_ThrusterConversionFcn_lookup_table_input(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & msg)
  : msg_(msg)
  {}
  Init_ThrusterConversionFcn_lookup_table_output lookup_table_input(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn::_lookup_table_input_type arg)
  {
    msg_.lookup_table_input = std::move(arg);
    return Init_ThrusterConversionFcn_lookup_table_output(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn msg_;
};

class Init_ThrusterConversionFcn_data
{
public:
  explicit Init_ThrusterConversionFcn_data(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & msg)
  : msg_(msg)
  {}
  Init_ThrusterConversionFcn_lookup_table_input data(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ThrusterConversionFcn_lookup_table_input(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn msg_;
};

class Init_ThrusterConversionFcn_tags
{
public:
  explicit Init_ThrusterConversionFcn_tags(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn & msg)
  : msg_(msg)
  {}
  Init_ThrusterConversionFcn_data tags(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_ThrusterConversionFcn_data(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn msg_;
};

class Init_ThrusterConversionFcn_function_name
{
public:
  Init_ThrusterConversionFcn_function_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ThrusterConversionFcn_tags function_name(::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn::_function_name_type arg)
  {
    msg_.function_name = std::move(arg);
    return Init_ThrusterConversionFcn_tags(msg_);
  }

private:
  ::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::uuv_gazebo_ros_plugins_msgs::msg::ThrusterConversionFcn>()
{
  return uuv_gazebo_ros_plugins_msgs::msg::builder::Init_ThrusterConversionFcn_function_name();
}

}  // namespace uuv_gazebo_ros_plugins_msgs

#endif  // UUV_GAZEBO_ROS_PLUGINS_MSGS__MSG__DETAIL__THRUSTER_CONVERSION_FCN__BUILDER_HPP_
