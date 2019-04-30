#pragma once
#include "VarianceScaling.h"
namespace nn
{
	namespace initializer {
		class HeUniform :
			public VarianceScaling
		{
		public:
			HeUniform(int seed = 0);
			~HeUniform();
		};
	}
}
