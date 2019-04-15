#pragma once
#include "VarianceScaling.h"

namespace nn
{
	class LecunUniform :
		public VarianceScaling
	{
	public:
		LecunUniform(int seed = 0);
		~LecunUniform();
	};
}

