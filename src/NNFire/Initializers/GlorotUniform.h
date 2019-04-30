#pragma once
#include "VarianceScaling.h"

namespace nn
{
	namespace initializers {
		class GlorotUniform :
			public VarianceScaling
		{
		public:
			GlorotUniform(int seed = 0);
			~GlorotUniform();
		};
	}
}
