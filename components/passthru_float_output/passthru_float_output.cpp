#include "esphome/core/log.h"
#include "passthru_float_output.h"

namespace esphome {
namespace passthru_float_output {

static const char *TAG = "passthru_float_output.output";

void EmptyFloatOutput::setup(){

}

void EmptyFloatOutput::write_state(float state){
	valx = state;
}

void EmptyFloatOutput::dump_config() {
    ESP_LOGCONFIG(TAG, "Empty custom float output");
}

float EmptyFloatOutput::get_value() {
	return valx;
}

} //namespace empty_float_output
} //namespace esphome

