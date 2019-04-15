#include "LecunNormal.h"

namespace nn
{
	LecunNormal::LecunNormal(int seed)
		: VarianceScaling(1, "fan_in", "normal", seed)
	{
		Name = "lecun_normal";
	}


	LecunNormal::~LecunNormal()
	{
	}
}
