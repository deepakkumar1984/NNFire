#pragma once
#include "BaseInitializer.h"

namespace nn
{
	class RandomUniform :
		public BaseInitializer
	{
	public:
		float Min;
		float Max;
		int Seed;

		RandomUniform(float min = 0, float max = 0.05, int seed = 0);
		~RandomUniform();

		array Generate(int shape[]);
	};
}

