#pragma once

#include "esphome/core/component.h"
#include "esphome/components/output/float_output.h"

namespace esphome {
	namespace passthru_float_output {

		class PassthruFloatOutput: public output::FloatOutput, public Component {
		public:
			float valx;
			void setup() override;
			void write_state(float state) override;
			void dump_config() override;
			float get_value();
		};
	} //namespace passthru_float_output
} //namespace esphome