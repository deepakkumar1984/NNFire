#pragma once
#include "BaseInitializer.h"

namespace nn
{
	namespace initializers {
		class RandomNormal :
			public BaseInitializer
		{
		public:
			float Mean;
			float StdDev;
			int Seed;

			RandomNormal(float mean = 0, float stddev = 0, int seed = 0);
			~RandomNormal();

			array Generate(int shape[]);
		};
	}
}

