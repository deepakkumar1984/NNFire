#include "HeNormal.h"

namespace nn
{
	namespace initializer {
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
