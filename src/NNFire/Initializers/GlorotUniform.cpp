#include "GlorotUniform.h"

namespace nn
{
	namespace initializers {
		GlorotUniform::GlorotUniform(int seed)
			: VarianceScaling(1, "fan_avg", "uniform", seed)
		{
			Name = "glorot_uniform";
		}


		GlorotUniform::~GlorotUniform()
		{
		}
	}
}
