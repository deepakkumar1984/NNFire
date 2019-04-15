#include "GlorotNormal.h"

namespace nn
{
	GlorotNormal::GlorotNormal(int seed):
		VarianceScaling(1, "fan_avg", "normal", seed)
	{
		Name = "glorot_normal";
	}


	GlorotNormal::~GlorotNormal()
	{
	}
}
