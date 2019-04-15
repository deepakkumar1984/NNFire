#pragma once
#include "VarianceScaling.h"
namespace nn
{
	class GlorotNormal :
		public VarianceScaling
	{
	public:
		GlorotNormal(int seed = 0);
		~GlorotNormal();
	};
}

