#pragma once
#include "VarianceScaling.h"

namespace nn
{
	namespace initializers {
		class LecunNormal :
			public VarianceScaling
		{
		public:
			LecunNormal(int seed = 0);
			~LecunNormal();
		};
	}
}

