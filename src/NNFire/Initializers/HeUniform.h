#pragma once
#include "VarianceScaling.h"
namespace nn
{
	namespace initializers {
		class HeUniform :
			public VarianceScaling
		{
		public:
			HeUniform(int seed = 0);
			~HeUniform();
		};
	}
}
