#pragma once
#include "VarianceScaling.h"

namespace nn
{
	namespace initializer {
		class GlorotUniform :
			public VarianceScaling
		{
		public:
			GlorotUniform(int seed = 0);
			~GlorotUniform();
		};
	}
}
