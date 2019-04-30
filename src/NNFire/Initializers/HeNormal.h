#pragma once
#include "VarianceScaling.h"

namespace nn
{
	namespace initializer {
		class HeNormal :
			public VarianceScaling
		{
		public:
			HeNormal(int seed = 0);
			~HeNormal();
		};
	}
}

