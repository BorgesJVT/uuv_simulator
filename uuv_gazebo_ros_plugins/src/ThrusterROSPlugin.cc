// Copyright (c) 2016 The UUV Simulator Authors.
// All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <uuv_gazebo_ros_plugins/ThrusterROSPlugin.hh>

#include <string>

#include "rclcpp/logger.hpp"

#include <gazebo/physics/Base.hh>
#include <gazebo/physics/Link.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/World.hh>

#include <uuv_gazebo_ros_plugins_msgs/srv/set_thruster_state.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/get_thruster_state.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/set_thruster_efficiency.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/get_thruster_efficiency.hpp>
#include <uuv_gazebo_ros_plugins_msgs/srv/get_thruster_conversion_fcn.hpp>

#include <uuv_gazebo_ros_plugins_msgs/msg/float_stamped.hpp>

namespace uuv_simulator_ros
{
/////////////////////////////////////////////////
ThrusterROSPlugin::ThrusterROSPlugin()
{
  this->rosPublishPeriod = gazebo::common::Time(0.05);
  this->lastRosPublishTime = gazebo::common::Time(0.0);
}

/////////////////////////////////////////////////
ThrusterROSPlugin::~ThrusterROSPlugin()
{
#if GAZEBO_MAJOR_VERSION >= 8
  this->rosPublishConnection.reset();
#else
  gazebo::event::Events::DisconnectWorldUpdateBegin(
    this->rosPublishConnection);
#endif

}

/////////////////////////////////////////////////
void ThrusterROSPlugin::SetThrustReference(
    const uuv_gazebo_ros_plugins_msgs::msg::FloatStamped::SharedPtr _msg)
{
  if (std::isnan(_msg->data))
  {
    RCLCPP_WARN(this->rosNode->get_logger(), "ThrusterROSPlugin: Ignoring nan command");
    return;
  }

  this->inputCommand = _msg->data;
}

/////////////////////////////////////////////////
gazebo::common::Time ThrusterROSPlugin::GetRosPublishPeriod()
{
  return this->rosPublishPeriod;
}

/////////////////////////////////////////////////
void ThrusterROSPlugin::SetRosPublishRate(double _hz)
{
  if (_hz > 0.0)
    this->rosPublishPeriod = 1.0 / _hz;
  else
    this->rosPublishPeriod = 0.;
}

/////////////////////////////////////////////////
void ThrusterROSPlugin::Init()
{
  ThrusterPlugin::Init();
}

/////////////////////////////////////////////////
void ThrusterROSPlugin::Reset()
{
  this->lastRosPublishTime.Set(0, 0);
}

/////////////////////////////////////////////////
void ThrusterROSPlugin::Load(gazebo::physics::ModelPtr _parent,
                             sdf::ElementPtr _sdf)
{
  try {
    ThrusterPlugin::Load(_parent, _sdf);
  } catch(gazebo::common::Exception &_e)
  {
    gzerr << "Error loading plugin."
          << "Please ensure that your model is correct."
          << '\n';
    return;
  }

  if (!rclcpp::ok())
  {
    gzerr << "Not loading plugin since ROS has not been "
          << "properly initialized.  Try starting gazebo with ros plugin:\n"
          << "  gazebo -s libgazebo_ros_api_plugin.so\n";
    return;
  }

  this->rosNode = gazebo_ros::Node::Get(_sdf);
 
  this->set_thruste_efficiecy_srv = this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency>
      (
      this->topicPrefix + "set_thrust_force_efficiency", 
      std::bind(&ThrusterROSPlugin::SetThrustForceEfficiency, this, std::placeholders::_1, std::placeholders::_2) 
      );
  
  this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
      (
      this->topicPrefix + "get_thrust_force_efficiency",
      std::bind(&ThrusterROSPlugin::GetThrustForceEfficiency, this, std::placeholders::_1, std::placeholders::_2)
      );

  this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency>
      (
      this->topicPrefix + "set_dynamic_state_efficiency",
      std::bind(&ThrusterROSPlugin::SetDynamicStateEfficiency, this, std::placeholders::_1, std::placeholders::_2)
      );

  this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency>
      (
      this->topicPrefix + "get_dynamic_state_efficiency",
      std::bind(&ThrusterROSPlugin::GetDynamicStateEfficiency, this, std::placeholders::_1, std::placeholders::_2)
      );

  this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState>
      (
      this->topicPrefix + "set_thruster_state",
      std::bind(&ThrusterROSPlugin::SetThrusterState, this, std::placeholders::_1, std::placeholders::_2)
      );

  this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState>
      (
      this->topicPrefix + "get_thruster_state",
      std::bind(&ThrusterROSPlugin::GetThrusterState, this, std::placeholders::_1, std::placeholders::_2)
      );

  this->rosNode->create_service<uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn>
      (
      this->topicPrefix + "get_thruster_conversion_fcn",
      std::bind(&ThrusterROSPlugin::GetThrusterConversionFcn, this, std::placeholders::_1, std::placeholders::_2)
      );


   this->subThrustReference = this->rosNode->create_subscription<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>
              (
                this->commandSubscriber->GetTopic(), 10,
                std::bind(&ThrusterROSPlugin::SetThrustReference, this, std::placeholders::_1)
              );

  this->pubThrust = this->rosNode->create_publisher<uuv_gazebo_ros_plugins_msgs::msg::FloatStamped>(
    this->thrustTopicPublisher->GetTopic(), 10);

  this->pubThrustWrench =
    this->rosNode->create_publisher<geometry_msgs::msg::WrenchStamped>(
      this->thrustTopicPublisher->GetTopic() + "_wrench", 10);

  this->pubThrusterState = this->rosNode->create_publisher<std_msgs::msg::Bool>(
    this->topicPrefix + "is_on", 1);

  this->pubThrustForceEff = this->rosNode->create_publisher<std_msgs::msg::Float64>(
    this->topicPrefix + "thrust_efficiency", 1);

  this->pubDynamicStateEff = this->rosNode->create_publisher<std_msgs::msg::Float64>(
    this->topicPrefix + "dynamic_state_efficiency", 1);

  gzmsg << "Thruster #" << this->thrusterID << " initialized" << std::endl
    << "\t- Link: " << this->thrusterLink->GetName() << std::endl
    << "\t- Robot model: " << _parent->GetName() << std::endl
    << "\t- Input command topic: " <<
      this->commandSubscriber->GetTopic() << std::endl
    << "\t- Thrust output topic: " <<
      this->thrustTopicPublisher->GetTopic() << std::endl;

  this->rosPublishConnection = gazebo::event::Events::ConnectWorldUpdateBegin(
    boost::bind(&ThrusterROSPlugin::RosPublishStates, this));
}

/////////////////////////////////////////////////
void ThrusterROSPlugin::RosPublishStates()
{
  // Limit publish rate according to publish period
  if (this->thrustForceStamp - this->lastRosPublishTime >=
      this->rosPublishPeriod)
  {
    this->lastRosPublishTime = this->thrustForceStamp;

    // Publish the thrust force magnitude
    uuv_gazebo_ros_plugins_msgs::msg::FloatStamped thrustMsg;
    thrustMsg.header.stamp = rclcpp::Clock().now();// Pega desse NODE mesmo?
    thrustMsg.header.frame_id = this->thrusterLink->GetName();
    thrustMsg.data = this->thrustForce;
    this->pubThrust->publish(thrustMsg);

    // Publish the thrust force vector wrt the thruster frame
    geometry_msgs::msg::WrenchStamped thrustWrenchMsg;
    thrustWrenchMsg.header.stamp = rclcpp::Clock().now(); // Pega desse NODE mesmo?
    thrustWrenchMsg.header.frame_id = this->thrusterLink->GetName();
    ignition::math::Vector3d thrustVector = this->thrustForce * this->thrusterAxis;
    thrustWrenchMsg.wrench.force.x = thrustVector.X();
    thrustWrenchMsg.wrench.force.y = thrustVector.Y();
    thrustWrenchMsg.wrench.force.z = thrustVector.Z();
    this->pubThrustWrench->publish(thrustWrenchMsg);

    // Publish the thruster current state (ON or OFF)
    std_msgs::msg::Bool isOnMsg;
    isOnMsg.data = this->isOn;
    this->pubThrusterState->publish(isOnMsg);

    // Publish thrust output efficiency
    std_msgs::msg::Float64 thrustEffMsg;
    thrustEffMsg.data = this->thrustEfficiency;
    this->pubThrustForceEff->publish(thrustEffMsg);

    // Publish dynamic state efficiency
    std_msgs::msg::Float64 dynStateEffMsg;
    dynStateEffMsg.data = this->propellerEfficiency;
    this->pubDynamicStateEff->publish(dynStateEffMsg);
  }
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::SetThrustForceEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Response::SharedPtr _res)
{
  if (_req->efficiency < 0.0 || _req->efficiency > 1.0)
  {
    _res->success = false;
  }
  else
  {
    this->thrustEfficiency = _req->efficiency;
    _res->success = true;
    gzmsg << "Setting thrust efficiency at thruster " <<
      this->thrusterLink->GetName() << "=" << _req->efficiency  * 100
      << "%" << std::endl;
  }
  return true;
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::GetThrustForceEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Response::SharedPtr _res)
{
  _res->efficiency = this->thrustEfficiency;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::SetDynamicStateEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterEfficiency::Response::SharedPtr _res)
{
  if (_req->efficiency < 0.0 || _req->efficiency > 1.0)
  {
    _res->success = false;
  }
  else
  {
    this->propellerEfficiency = _req->efficiency;
    _res->success = true;
    gzmsg << "Setting propeller efficiency at thruster " <<
      this->thrusterLink->GetName() << "=" << _req->efficiency * 100
      << "%" << std::endl;
  }
  return true;
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::GetDynamicStateEfficiency(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterEfficiency::Response::SharedPtr _res)
{
  _res->efficiency = this->propellerEfficiency;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::SetThrusterState(
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::SetThrusterState::Response::SharedPtr _res)
{
  this->isOn = _req->on;
  gzmsg << "Turning thruster " << this->thrusterLink->GetName() << " " <<
    (this->isOn ? "ON" : "OFF") << std::endl;
  _res->success = true;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::GetThrusterState(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterState::Response::SharedPtr _res)
{
  _res->is_on = this->isOn;
  return true;
}

/////////////////////////////////////////////////
bool ThrusterROSPlugin::GetThrusterConversionFcn(
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn::Request::SharedPtr _req,
  uuv_gazebo_ros_plugins_msgs::srv::GetThrusterConversionFcn::Response::SharedPtr _res)
{
  _res->fcn.function_name = this->conversionFunction->GetType();

  double param;

  if (!_res->fcn.function_name.compare("Basic"))
  {
    gzmsg << "ThrusterROSPlugin::GetThrusterConversionFcn::Basic" << std::endl;
    _res->fcn.tags.push_back("rotor_constant");
    this->conversionFunction->GetParam("rotor_constant", param);
    _res->fcn.data.push_back(param);
  }
  else if (!_res->fcn.function_name.compare("Bessa"))
  {
    gzmsg << "ThrusterROSPlugin::GetThrusterConversionFcn::Bessa" << std::endl;
    _res->fcn.tags.push_back("rotor_constant_l");
    this->conversionFunction->GetParam("rotor_constant_l", param);
    _res->fcn.data.push_back(param);

    _res->fcn.tags.push_back("rotor_constant_r");
    this->conversionFunction->GetParam("rotor_constant_r", param);
    _res->fcn.data.push_back(param);

    _res->fcn.tags.push_back("delta_l");
    this->conversionFunction->GetParam("delta_l", param);
    _res->fcn.data.push_back(param);

    _res->fcn.tags.push_back("delta_r");
    this->conversionFunction->GetParam("delta_r", param);
    _res->fcn.data.push_back(param);
  }
  else if (!_res->fcn.function_name.compare("LinearInterp"))
  {
    gzmsg << "ThrusterROSPlugin::GetThrusterConversionFcn::LinearInterp" << std::endl;
    std::map<double, double> table = this->conversionFunction->GetTable();

    for (auto& item : table)
    {
      gzmsg << item.first << " " << item.second << std::endl;
      _res->fcn.lookup_table_input.push_back(item.first);
      _res->fcn.lookup_table_output.push_back(item.second);
    }
  }

  return true;
}

/////////////////////////////////////////////////
GZ_REGISTER_MODEL_PLUGIN(ThrusterROSPlugin)
}