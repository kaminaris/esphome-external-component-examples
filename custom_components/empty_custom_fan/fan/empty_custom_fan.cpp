#include "empty_custom_fan.h"
#include "esphome/core/log.h"

namespace esphome {
namespace empty_custom_fan {

static const char *TAG = "empty_custom_fan.fan";

void EmptyCustomFan::setup() {
  auto traits = fan::FanTraits();
  traits.set_direction(false);
  traits.set_oscillation(false);
  traits.set_speed(false);
  
  this->fan_->set_traits(traits);
  
  this->fan_->add_on_state_callback([this]() { this->next_update_ = true; });
}

void EmptyCustomFan::loop() {
 
}

void EmptyCustomFan::dump_config() {
  ESP_LOGCONFIG(TAG, "Empty fan");
}

}  // namespace binary
}  // namespace empty_custom_fan
