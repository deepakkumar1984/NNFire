#pragma once
#include "VarianceScaling.h"

namespace nn
{
	class GlorotUniform :
		public VarianceScaling
	{
	public:
		GlorotUniform(int seed = 0);
		~GlorotUniform();
	};
}
