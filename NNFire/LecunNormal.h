#pragma once
#include "VarianceScaling.h"

namespace nn
{
	class LecunNormal :
		public VarianceScaling
	{
	public:
		LecunNormal(int seed = 0);
		~LecunNormal();
	};
}

