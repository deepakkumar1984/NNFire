#pragma once
#include "VarianceScaling.h"
namespace nn
{
	class HeUniform :
		public VarianceScaling
	{
	public:
		HeUniform(int seed = 0);
		~HeUniform();
	};
}
