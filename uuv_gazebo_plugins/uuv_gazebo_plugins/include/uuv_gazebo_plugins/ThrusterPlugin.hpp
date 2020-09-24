
#include <gazebo/common/Plugin.hh> //ModelPlugin

#include "Double.pb.h"

#include <memory>

namespace uuv_gazebo
{

/// \brief Definition of a pointer to the floating point message
typedef const boost::shared_ptr<const uuv_gazebo_plugins_msgs::msgs::Double>
ConstDoublePtr;

class ThrusterPluginPrivate;


class ThrusterPlugin : public gazebo::ModelPlugin
{
public:
  /// Constructor
  ThrusterPlugin();

  /// Destructor
  virtual ~ThrusterPlugin();

protected:
  // Documentation inherited
  void Load(gazebo::physics::ModelPtr model, sdf::ElementPtr sdf) override;
    
  // Documentation inherited
  void Reset() override;

  //// Optional callback to be called at every simulation iteration.
  //virtual void OnUpdate();

private:

  /// Private data pointer
  std::unique_ptr<ThrusterPluginPrivate> impl_;
};

}  // namespace gazebo_plugins
