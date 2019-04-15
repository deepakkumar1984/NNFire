#include "HeNormal.h"

namespace nn
{
	HeNormal::HeNormal(int seed)
		: VarianceScaling(2, "fan_in", "normal", seed)
	{
		Name = "he_normal";
	}


	HeNormal::~HeNormal()
	{
	}
}
