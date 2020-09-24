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
#include <gazebo_ros/node.hpp>
#include <geometry_msgs/msg/vector3.hpp>

#include <memory>

#include "uuv_world_plugins/uuv_world_plugins_underwater_current.hpp"

namespace uuv_world_plugins
{

class UUVWorldPluginsUnderwaterCurrentPrivate
{
public:
  /// Callback when world is updated.
  /// \param[in] _info Updated simulation info.
  void OnUpdate(const gazebo::common::UpdateInfo & _info);

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
  geometry_msgs::msg::Vector3 current_vel_msg_;
  
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

  // Get a callback when world is updated
  impl_->world_update_event_ = gazebo::event::Events::ConnectWorldUpdateBegin(
    std::bind(&UUVWorldPluginsUnderwaterCurrentPrivate::OnUpdate, impl_.get(), std::placeholders::_1));

  // Update rate
  auto update_rate = _sdf->Get<double>("update_rate", 100.0).first;
  if (update_rate > 0.0) {
    impl_->update_period_ = 1.0 / update_rate;
  } else {
    impl_->update_period_ = 0.0;
  }
  impl_->last_update_time_ = _world->SimTime();
}


void UUVWorldPluginsUnderwaterCurrentPrivate::OnUpdate(const gazebo::common::UpdateInfo & _info)
{
  double seconds_since_last_update = (_info.simTime - last_update_time_).Double();

  if (seconds_since_last_update < update_period_) {
    return;
  }
  
  last_update_time_ = _info.simTime;
}  

void UUVWorldPluginsUnderwaterCurrentPrivate::PublishCurrentVelocity()
{
  /*
  gazebo::msgs::Vector3d current_vel;
  gazebo::msgs::Set(&current_vel, ignition::math::Vector3d(this->current_velocity_.X(),
                                                  this->current_velocity_.Y(),
                                                  this->current_velocity_.Z()));
  this->publishers_[this->current_velocity_topic_]->Publish(current_vel);

  current_vel_msg_.x
  current_vel_msg_.y
  current_vel_msg_.z
  this->publishers_[this->current_velocity_topic_]->publish(current_vel_msg_);
  */
}


GZ_REGISTER_WORLD_PLUGIN(UUVWorldPluginsUnderwaterCurrent)

}  // namespace uuv_world_plugins
