#include "esphome/core/log.h"
#include "passthru_float_output.h"

namespace esphome {
namespace passthru_float_output {

static const char *TAG = "passthru_float_output.output";

void PassthruFloatOutput::setup(){

}

void PassthruFloatOutput::write_state(float state){
	valx = state;
}

void PassthruFloatOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Passthru custom float output");
}

float PassthruFloatOutput::get_value() {
	return valx;
}

} //namespace passthru_float_output
} //namespace esphome

