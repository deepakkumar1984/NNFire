#pragma once
#include "BaseInitializer.h"
namespace nn
{
	namespace initializer {
		class VarianceScaling :
			public BaseInitializer
		{
		public:
			float Scale;
			std::string Mode;
			std::string Distribution;
			int Seed;

			VarianceScaling(const float scale = 1, std::string mode = "fan_in", std::string distribution = "normal", const int seed = 0);
			~VarianceScaling();

			array Generate(int shape[]);

		private:
			array random_normal(int shape[], float mean, float std, int seed = 0);
			array random_uniform(int shape[], float min, float max, int seed = 0);
		};
	}
}

