#include "LecunUniform.h"

namespace nn
{
	namespace initializer {
		LecunUniform::LecunUniform(int seed)
			: VarianceScaling(1, "fan_in", "uniform", seed)
		{
			Name = "lecun_uniform";
		}


		LecunUniform::~LecunUniform()
		{
		}
	}
}
