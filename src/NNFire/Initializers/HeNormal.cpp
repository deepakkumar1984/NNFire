#include "HeNormal.h"

namespace nn
{
	namespace initializers {
		HeNormal::HeNormal(int seed)
			: VarianceScaling(2, "fan_in", "normal", seed)
		{
			Name = "he_normal";
		}


		HeNormal::~HeNormal()
		{
		}
	}
}
