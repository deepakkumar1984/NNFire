#include "LecunNormal.h"

namespace nn
{
	namespace initializer {
		LecunNormal::LecunNormal(int seed)
			: VarianceScaling(1, "fan_in", "normal", seed)
		{
			Name = "lecun_normal";
		}


		LecunNormal::~LecunNormal()
		{
		}
	}
}
