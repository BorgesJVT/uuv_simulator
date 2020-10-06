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

/// \file uuv_world_plugins_underwater_current.cpp

#include <gazebo/common/Plugin.hh>
#include <gazebo/physics/Entity.hh>
#include <gazebo/physics/Light.hh>
#include <gazebo/physics/Link.hh>
#include <gazebo/physics/Model.hh>
#include <gazebo/physics/World.hh>

#include <uuv_world_ros_plugins_msgs/srv/set_current_model.hpp>
#include <uuv_world_ros_plugins_msgs/srv/get_current_model.hpp>
#include <uuv_world_ros_plugins_msgs/srv/set_current_velocity.hpp>
#include <uuv_world_ros_plugins_msgs/srv/set_current_direction.hpp>

#include <gazebo_ros/node.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <geometry_msgs/msg/twist_stamped.hpp>

#include <memory>

#include "uuv_world_plugins/uuv_world_plugins_underwater_current.hpp"
#include "uuv_world_plugins/uuv_world_plugins_gauss_markov_process.hpp"

namespace uuv_world_plugins
{

class UUVWorldPluginsUnderwaterCurrentPrivate
{
public:
  /// Callback when world is updated.
  /// \param[in] _info Updated simulation info.
  void Update();

  /// \brief Publish current velocity and the pose of its frame
  void PublishCurrentVelocity();

  /// \brief Connection to world update event, called at every iteration
  gazebo::event::ConnectionPtr world_update_event_;
    
  /// \brief World pointer from Gazebo.
  gazebo::physics::WorldPtr world_;
  
  /// \brief Pointer to sdf
  sdf::ElementPtr sdf_;

  /// \brief True if the sea surface is present
  bool has_surface_;
    
  /// ROS node for communication, managed by gazebo_ros.
  gazebo_ros::Node::SharedPtr ros_node_;

  /// \brief Update period in seconds.
  double update_period_;
 
  /// \brief Map of publishers
  std::map<std::string, gazebo::transport::PublisherPtr> publishers_;
  
  ignition::math::Vector3d current_velocity_;
  
  /// \brief Current velocity topic
  std::string current_velocity_topic_;

  /// \brief Namespace for topics and services
  std::string ns_;

  /// \brief Gauss-Markov process instance for the current velocity
  GaussMarkovProcess current_vel_model_;

  /// \brief Gauss-Markov process instance for horizontal angle model
  GaussMarkovProcess current_horz_angle_model_;

  /// \brief Gauss-Markov process instance for vertical angle model
  GaussMarkovProcess current_vert_angle_model_;

  /// \brief Last update time stamp
  gazebo::common::Time last_update_time_;

  /***************************************
   * UnderwaterCurrentROSPlugin
  */

public: 

  void OnUpdateCurrentVel();

  /// \brief Service call to update the parameters for the velocity
  /// Gauss-Markov process model
  bool UpdateCurrentVelocityModel(
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Response::SharedPtr _res);

  /// \brief Service call to update the parameters for the horizontal angle
  /// Gauss-Markov process model
  bool UpdateCurrentHorzAngleModel(
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Response::SharedPtr _res);

  /// \brief Service call to update the parameters for the vertical angle
  /// Gauss-Markov process model
  bool UpdateCurrentVertAngleModel(
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Response::SharedPtr _res);

  /// \brief Service call to read the parameters for the velocity
  /// Gauss-Markov process model
  bool GetCurrentVelocityModel(
      uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Response::SharedPtr _res);

  /// \brief Service call to read the parameters for the horizontal angle
  /// Gauss-Markov process model
  bool GetCurrentHorzAngleModel(
      uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Response::SharedPtr _res);

  /// \brief Service call to read the parameters for the vertical angle
  /// Gauss-Markov process model
  bool GetCurrentVertAngleModel(
      uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Response::SharedPtr _res);

  /// \brief Service call to update the mean value of the flow velocity
  bool UpdateCurrentVelocity(
      uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity::Response::SharedPtr _res);

  /// \brief Service call to update the mean value of the horizontal angle
  bool UpdateHorzAngle(
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Response::SharedPtr _res);

  /// \brief Service call to update the mean value of the vertical angle
  bool UpdateVertAngle(
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Request::SharedPtr _req,
      uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Response::SharedPtr _res);

  /// All underwater world services
  //std::map<std::string, rclcpp::ServiceBase::SharedPtr> world_services_;

  /// \brief ROS service to handle requests for origin spherical coordinates.
  // JOAO: Must this service pointer be unique?

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>::SharedPtr update_current_velocity_model_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>::SharedPtr update_current_horz_angle_model_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>::SharedPtr update_current_vert_angle_model_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>::SharedPtr get_current_velocity_model_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>::SharedPtr get_current_horz_angle_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>::SharedPtr get_current_vert_angle_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>::SharedPtr update_current_velocity_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>::SharedPtr update_horz_angle_service_;

  rclcpp::Service<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>::SharedPtr update_vert_angle_service_;

  /// \brief Publisher for the flow velocity in the world frame
  rclcpp::Publisher<geometry_msgs::msg::TwistStamped>::SharedPtr flow_velocity_pub_;

  /// \brief Period after which we should publish a message via ROS.
  gazebo::common::Time ros_publish_period_;

  /// \brief Last time we published a message via ROS.
  gazebo::common::Time last_ros_publish_time_;

  /// Connection to event called at every world iteration.
  gazebo::event::ConnectionPtr update_connection_;
};

UUVWorldPluginsUnderwaterCurrent::UUVWorldPluginsUnderwaterCurrent()
: impl_(std::make_unique<UUVWorldPluginsUnderwaterCurrentPrivate>())
{
}

UUVWorldPluginsUnderwaterCurrent::~UUVWorldPluginsUnderwaterCurrent()
{
}

void UUVWorldPluginsUnderwaterCurrent::Load(gazebo::physics::WorldPtr _world, sdf::ElementPtr _sdf)
{
  impl_->world_ = _world;

  impl_->ros_node_ = gazebo_ros::Node::Get(_sdf);

    // Get QoS profiles
  const gazebo_ros::QoS & qos = impl_->ros_node_->get_qos();

  if(!rclcpp::ok())
  {
    std::stringstream ss;
    ss << "Not loading plugin since ROS has not been "
       << "properly initialized.  Try starting gazebo with ros plugin:" << std::endl
       << "  gazebo -s libgazebo_ros_api_plugin.so" << std::endl;
    RCLCPP_ERROR(impl_->ros_node_->get_logger(), ss.str().c_str());

    return;
  }

  impl_->ns_ = "";
  if (_sdf->HasElement("namespace"))
    impl_->ns_ = _sdf->Get<std::string>("namespace");
  
  RCLCPP_INFO(
    impl_->ros_node_->get_logger(), "UUVWorldPluginsUnderwaterCurrent::namespace= [%s]", impl_->ns_.c_str());

  // Retrieve the current velocity configuration, if existent
  GZ_ASSERT(_sdf->HasElement("constant_current"),
    "Constant current configuration not available");
  sdf::ElementPtr current_velocity_params = _sdf->GetElement(
    "constant_current");

  // Read the topic names from the SDF file
  if (current_velocity_params->HasElement("topic"))
    impl_->current_velocity_topic_ =
      current_velocity_params->Get<std::string>("topic");
  else
    impl_->current_velocity_topic_ = "current_velocity";

  GZ_ASSERT(!impl_->current_velocity_topic_.empty(),
    "Empty current velocity topic");

  if (current_velocity_params->HasElement("velocity"))
  {
    sdf::ElementPtr elem = current_velocity_params->GetElement("velocity");
    if (elem->HasElement("mean"))
        impl_->current_vel_model_.mean = elem->Get<double>("mean");
    if (elem->HasElement("min"))
        impl_->current_vel_model_.min = elem->Get<double>("min");
    if (elem->HasElement("max"))
        impl_->current_vel_model_.max = elem->Get<double>("max");
    if (elem->HasElement("mu"))
        impl_->current_vel_model_.mu = elem->Get<double>("mu");
    if (elem->HasElement("noiseAmp"))
        impl_->current_vel_model_.noiseAmp = elem->Get<double>("noiseAmp");

    GZ_ASSERT(impl_->current_vel_model_.min < impl_->current_vel_model_.max,
      "Invalid current velocity limits");
    GZ_ASSERT(impl_->current_vel_model_.mean >= impl_->current_vel_model_.min,
      "Mean velocity must be greater than minimum");
    GZ_ASSERT(impl_->current_vel_model_.mean <= impl_->current_vel_model_.max,
      "Mean velocity must be smaller than maximum");
    GZ_ASSERT(impl_->current_vel_model_.mu >= 0 && impl_->current_vel_model_.mu < 1,
      "Invalid process constant");
    GZ_ASSERT(impl_->current_vel_model_.noiseAmp < 1 &&
      impl_->current_vel_model_.noiseAmp >= 0,
      "Noise amplitude has to be smaller than 1");
  }

  impl_->current_vel_model_.var = impl_->current_vel_model_.mean;
  gzmsg << "Current velocity [m/s] Gauss-Markov process model:" << std::endl;
  impl_->current_vel_model_.Print();

  if (current_velocity_params->HasElement("horizontal_angle"))
  {
    sdf::ElementPtr elem =
      current_velocity_params->GetElement("horizontal_angle");

    if (elem->HasElement("mean"))
      impl_->current_horz_angle_model_.mean = elem->Get<double>("mean");
    if (elem->HasElement("min"))
      impl_->current_horz_angle_model_.min = elem->Get<double>("min");
    if (elem->HasElement("max"))
      impl_->current_horz_angle_model_.max = elem->Get<double>("max");
    if (elem->HasElement("mu"))
      impl_->current_horz_angle_model_.mu = elem->Get<double>("mu");
    if (elem->HasElement("noiseAmp"))
      impl_->current_horz_angle_model_.noiseAmp = elem->Get<double>("noiseAmp");

    GZ_ASSERT(impl_->current_horz_angle_model_.min <
      impl_->current_horz_angle_model_.max,
      "Invalid current horizontal angle limits");
    GZ_ASSERT(impl_->current_horz_angle_model_.mean >=
      impl_->current_horz_angle_model_.min,
      "Mean horizontal angle must be greater than minimum");
    GZ_ASSERT(impl_->current_horz_angle_model_.mean <=
      impl_->current_horz_angle_model_.max,
      "Mean horizontal angle must be smaller than maximum");
    GZ_ASSERT(impl_->current_horz_angle_model_.mu >= 0 &&
      impl_->current_horz_angle_model_.mu < 1,
      "Invalid process constant");
    GZ_ASSERT(impl_->current_horz_angle_model_.noiseAmp < 1 &&
      impl_->current_horz_angle_model_.noiseAmp >= 0,
      "Noise amplitude for horizontal angle has to be between 0 and 1");
  }

  impl_->current_horz_angle_model_.var = impl_->current_horz_angle_model_.mean;
  gzmsg <<
    "Current velocity horizontal angle [rad] Gauss-Markov process model:"
    << std::endl;
  impl_->current_horz_angle_model_.Print();

  if (current_velocity_params->HasElement("vertical_angle"))
  {
    sdf::ElementPtr elem = current_velocity_params->GetElement("vertical_angle");

    if (elem->HasElement("mean"))
      impl_->current_vert_angle_model_.mean = elem->Get<double>("mean");
    if (elem->HasElement("min"))
      impl_->current_vert_angle_model_.min = elem->Get<double>("min");
    if (elem->HasElement("max"))
      impl_->current_vert_angle_model_.max = elem->Get<double>("max");
    if (elem->HasElement("mu"))
      impl_->current_vert_angle_model_.mu = elem->Get<double>("mu");
    if (elem->HasElement("noiseAmp"))
      impl_->current_vert_angle_model_.noiseAmp = elem->Get<double>("noiseAmp");

    GZ_ASSERT(impl_->current_vert_angle_model_.min <
      impl_->current_vert_angle_model_.max, "Invalid current vertical angle limits");
    GZ_ASSERT(impl_->current_vert_angle_model_.mean >=
      impl_->current_vert_angle_model_.min,
      "Mean vertical angle must be greater than minimum");
    GZ_ASSERT(impl_->current_vert_angle_model_.mean <=
      impl_->current_vert_angle_model_.max,
      "Mean vertical angle must be smaller than maximum");
    GZ_ASSERT(impl_->current_vert_angle_model_.mu >= 0 &&
      impl_->current_vert_angle_model_.mu < 1,
      "Invalid process constant");
    GZ_ASSERT(impl_->current_vert_angle_model_.noiseAmp < 1 &&
      impl_->current_vert_angle_model_.noiseAmp >= 0,
      "Noise amplitude for vertical angle has to be between 0 and 1");
  }

  impl_->current_vert_angle_model_.var = impl_->current_vert_angle_model_.mean;
  gzmsg <<
    "Current velocity horizontal angle [rad] Gauss-Markov process model:"
    << std::endl;
  impl_->current_vert_angle_model_.Print();

  /*----------------*/

  //impl_->ros_node_->reset();
  impl_->flow_velocity_pub_ = impl_->ros_node_->create_publisher<geometry_msgs::msg::TwistStamped>(
        impl_->current_velocity_topic_, qos.get_publisher_qos(impl_->current_velocity_topic_, rclcpp::QoS(1)));

  // Initialize update_current_velocity_model_service_
  impl_->update_current_velocity_model_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>(
    "set_current_velocity_model",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentVelocityModel, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  // Initialize update_current_horz_angle_model_service_
  impl_->update_current_horz_angle_model_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>(
    "set_current_horz_angle_model",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentHorzAngleModel, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  // Initialize update_current_vert_angle_model_service_
  impl_->update_current_vert_angle_model_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetCurrentModel>(
    "set_current_vert_angle_model",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentVertAngleModel, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  /*----------------*/

  // Initialize update_current_velocity_model_service_
  impl_->get_current_velocity_model_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>(
    "get_current_velocity_model",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::GetCurrentVelocityModel, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  // Initialize update_current_horz_angle_model_service_
  impl_->get_current_horz_angle_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>(
    "get_current_horz_angle_model",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::GetCurrentHorzAngleModel, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  // Initialize update_current_vert_angle_model_service_
  impl_->get_current_vert_angle_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::GetCurrentModel>(
    "get_current_vert_angle_model",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::GetCurrentVertAngleModel, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  /*----------------*/

  // Initialize update_current_velocity_model_service_
  impl_->update_current_velocity_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity>(
    "set_current_velocity",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentVelocity, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  // Initialize update_current_horz_angle_model_service_
  impl_->update_horz_angle_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>(
    "set_current_horz_angle",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::UpdateHorzAngle, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));

  // Initialize update_current_vert_angle_model_service_
  impl_->update_vert_angle_service_ = impl_->ros_node_->create_service<uuv_world_ros_plugins_msgs::srv::SetCurrentDirection>(
    "set_current_vert_angle",
    std::bind(
      &UUVWorldPluginsUnderwaterCurrentPrivate::UpdateVertAngle, impl_.get(),
      std::placeholders::_1, std::placeholders::_2));


  // // Get a callback when world is updated
  impl_->world_update_event_ = gazebo::event::Events::ConnectWorldUpdateBegin(
    std::bind(&UUVWorldPluginsUnderwaterCurrentPrivate::Update, impl_.get()));

  // // Update rate
  // auto update_rate = _sdf->Get<double>("update_rate", 100.0).first;
  // if (update_rate > 0.0) {
  //   impl_->update_period_ = 1.0 / update_rate;
  // } else {
  //   impl_->update_period_ = 0.0;
  // }
  // impl_->last_update_time_ = _world->SimTime();


  // Listen to the update event (broadcast every simulation iteration)
  impl_->update_connection_ = gazebo::event::Events::ConnectWorldUpdateBegin(
    std::bind(&UUVWorldPluginsUnderwaterCurrentPrivate::OnUpdateCurrentVel, impl_.get()));

  
}  // end Load function

/////////////////////////////////////////////////
void UUVWorldPluginsUnderwaterCurrentPrivate::OnUpdateCurrentVel()
{
  if (last_update_time_ - last_ros_publish_time_ >= ros_publish_period_)
  {
    last_ros_publish_time_ = last_update_time_;
    geometry_msgs::msg::TwistStamped flow_vel_msg;
    flow_vel_msg.header.stamp = rclcpp::Clock().now();
    flow_vel_msg.header.frame_id = "/world";

    flow_vel_msg.twist.linear.x = current_velocity_.X();
    flow_vel_msg.twist.linear.y = current_velocity_.Y();
    flow_vel_msg.twist.linear.z = current_velocity_.Z();

    flow_velocity_pub_->publish(flow_vel_msg);
  }
}

/////////////////////////////////////////////////
void UUVWorldPluginsUnderwaterCurrentPrivate::Update()
{
  gazebo::common::Time time = world_->SimTime();

  // Calculate the flow velocity and the direction using the Gauss-Markov
  // model

  // Update current velocity
  double current_vel_mag = current_vel_model_.Update(time.Double());

  // Update current horizontal direction around z axis of flow frame
  double horz_angle = current_horz_angle_model_.Update(time.Double());

  // Update current horizontal direction around z axis of flow frame
  double vert_angle = current_vert_angle_model_.Update(time.Double());

  // Generating the current velocity vector as in the NED frame
  current_velocity_ = ignition::math::Vector3d(
      current_vel_mag * cos(horz_angle) * cos(vert_angle),
      current_vel_mag * sin(horz_angle) * cos(vert_angle),
      current_vel_mag * sin(vert_angle));

  std::cout << "current_vel_mag: " << current_vel_mag << std::endl;
    std::cout << horz_angle << std::endl;
      std::cout << vert_angle << std::endl;
  std::cout << current_velocity_.X() << std::endl;
    std::cout << current_velocity_.Y() << std::endl;
      std::cout << current_velocity_.Z() << std::endl;
  // Update time stamp
  last_update_time_ = time;
  //->Publish(current_velocity_topic_);
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::UpdateHorzAngle(
    uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Response::SharedPtr _res)
{
  std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << std::endl;
  std::cout << _req->angle << std::endl;
  _res->success = current_horz_angle_model_.SetMean(_req->angle);

  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::UpdateVertAngle(
    uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetCurrentDirection::Response::SharedPtr _res)
{
  std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << std::endl;
  std::cout << _req->angle << std::endl;
  // _res->success = current_horz_angle_model_.SetMean(_req->angle);
  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentVelocity(
    uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetCurrentVelocity::Response::SharedPtr _res)
{
  std::cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << std::endl;
  std::cout << _req->velocity << std::endl;

  if (current_vel_model_.SetMean(_req->velocity) &&
      current_horz_angle_model_.SetMean(_req->horizontal_angle) &&
      current_vert_angle_model_.SetMean(_req->vertical_angle))
  {

  std::stringstream ss;
  ss << "Current velocity [m/s] = [%s]" << std::endl
     << "Current horizontal angle [rad] = [%s]" << std::endl
     << "Current vertical angle [rad] = [%s]" << std::endl
     << "\tWARNING: Current velocity calculated in the ENU frame" << std::endl;
  RCLCPP_WARN(ros_node_->get_logger(), ss.str().c_str(), 
    _req->velocity, _req->horizontal_angle, _req->vertical_angle);
   
    _res->success = true;
  }
  else
  {
    gzmsg << "Error while updating the current velocity" << std::endl;
    _res->success = false;
  }
  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::GetCurrentVelocityModel(
    uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Response::SharedPtr _res)
{
  _res->mean = current_vel_model_.mean;
  _res->min = current_vel_model_.min;
  _res->max = current_vel_model_.max;
  _res->noise = current_vel_model_.noiseAmp;
  _res->mu = current_vel_model_.mu;
  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::GetCurrentHorzAngleModel(
    uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Response::SharedPtr _res)
{
  _res->mean = current_horz_angle_model_.mean;
  _res->min = current_horz_angle_model_.min;
  _res->max = current_horz_angle_model_.max;
  _res->noise = current_horz_angle_model_.noiseAmp;
  _res->mu = current_horz_angle_model_.mu;
  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::GetCurrentVertAngleModel(
    uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::GetCurrentModel::Response::SharedPtr _res)
{
  _res->mean = current_vert_angle_model_.mean;
  _res->min = current_vert_angle_model_.min;
  _res->max = current_vert_angle_model_.max;
  _res->noise = current_vert_angle_model_.noiseAmp;
  _res->mu = current_vert_angle_model_.mu;
  return true;
}


/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentVelocityModel(
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Response::SharedPtr _res)
{
  _res->success = current_vel_model_.SetModel(
    std::max(0.0, _req->mean),
    std::max(0.0, _req->min),
    std::max(0.0, _req->max),
    _req->mu,
    _req->noise);

  std::stringstream ss;
  ss << "Current velocity model updated" << std::endl
     << "\tWARNING: Current velocity calculated in the ENU frame"
     << std::endl;
  RCLCPP_WARN(ros_node_->get_logger(), ss.str().c_str());

  current_vel_model_.Print();
  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentHorzAngleModel(
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Response::SharedPtr _res)
{
  _res->success = current_horz_angle_model_.SetModel(_req->mean, _req->min,
    _req->max, _req->mu, _req->noise);

  std::stringstream ss;
  ss << "Horizontal angle model updated" << std::endl
     << "\tWARNING: Current velocity calculated in the ENU frame"
     << std::endl;
  RCLCPP_WARN(ros_node_->get_logger(), ss.str().c_str());

  current_horz_angle_model_.Print();
  return true;
}

/////////////////////////////////////////////////
bool UUVWorldPluginsUnderwaterCurrentPrivate::UpdateCurrentVertAngleModel(
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Request::SharedPtr _req,
    uuv_world_ros_plugins_msgs::srv::SetCurrentModel::Response::SharedPtr _res)
{
  _res->success = current_vert_angle_model_.SetModel(_req->mean, _req->min,
    _req->max, _req->mu, _req->noise);

  std::stringstream ss;
  ss << "Vertical angle model updated" << std::endl
     << "\tWARNING: Current velocity calculated in the ENU frame"
     << std::endl;
  RCLCPP_WARN(ros_node_->get_logger(), ss.str().c_str());

  current_vert_angle_model_.Print();
  return true;
}

GZ_REGISTER_WORLD_PLUGIN(UUVWorldPluginsUnderwaterCurrent)

}  // namespace uuv_world_plugins
