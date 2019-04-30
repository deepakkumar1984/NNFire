#include "HeUniform.h"

namespace nn
{
	namespace initializer {
		HeUniform::HeUniform(int seed) :
			VarianceScaling(2, "fan_in", "uniform", seed)
		{
			Name = "he_uniform";
		}


		HeUniform::~HeUniform()
		{
		}
	}
}
