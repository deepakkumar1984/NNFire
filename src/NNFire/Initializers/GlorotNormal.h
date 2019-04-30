#pragma once
#include "VarianceScaling.h"
namespace nn
{
	namespace initializers {
		class GlorotNormal :
			public VarianceScaling
		{
		public:
			GlorotNormal(int seed = 0);
			~GlorotNormal();
		};
	}
}

