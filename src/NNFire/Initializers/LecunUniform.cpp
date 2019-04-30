#include "LecunUniform.h"

namespace nn
{
	namespace initializers {
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
