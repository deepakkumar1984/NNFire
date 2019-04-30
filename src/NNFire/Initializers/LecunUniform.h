#pragma once
#include "VarianceScaling.h"

namespace nn
{
	namespace initializer {
		class LecunUniform :
			public VarianceScaling
		{
		public:
			LecunUniform(int seed = 0);
			~LecunUniform();
		};
	}
}

