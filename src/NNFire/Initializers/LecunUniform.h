#pragma once
#include "VarianceScaling.h"

namespace nn
{
	namespace initializers {
		class LecunUniform :
			public VarianceScaling
		{
		public:
			LecunUniform(int seed = 0);
			~LecunUniform();
		};
	}
}

