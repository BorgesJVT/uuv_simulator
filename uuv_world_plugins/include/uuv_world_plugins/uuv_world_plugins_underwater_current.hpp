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

/// \file uuv_world_plugins_underwater_current.hpp
/// \brief Plugin that for the underwater world

#ifndef UUV_WORLD_PLUGINS__UNDERWATER_CURRENT_HPP__
#define UUV_WORLD_PLUGINS__UNDERWATER_CURRENT_HPP__

#include <gazebo/common/Plugin.hh>
#include <uuv_world_plugins/uuv_world_plugins_gauss_markov_process.hpp>

#include <memory>

namespace uuv_world_plugins
{
class UUVWorldPluginsUnderwaterCurrentPrivate;

class UUVWorldPluginsUnderwaterCurrent : public gazebo::WorldPlugin
{
public: 
  /// Constructor
  UUVWorldPluginsUnderwaterCurrent();
  
  /// Destructor
  virtual ~UUVWorldPluginsUnderwaterCurrent();

  // Documentation inherited.
  void Load(gazebo::physics::WorldPtr _world,
        sdf::ElementPtr _sdf) override;

  /// \brief Update the simulation state.
  /// \param[in] _info Information used in the update event.
  //public: void Update(const common::UpdateInfo &_info);


private:
  std::unique_ptr<UUVWorldPluginsUnderwaterCurrentPrivate> impl_;    
    
};

}  // namespace uuv_world_plugins
#endif  // UUV_WORLD_PLUGINS__UNDERWATER_CURRENT_HPP__
