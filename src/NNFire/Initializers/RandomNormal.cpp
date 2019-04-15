#include "RandomNormal.h"

namespace nn
{
	RandomNormal::RandomNormal(float mean, float stddev, int seed)
		: BaseInitializer("random_normal")
	{
		Mean = mean;
		StdDev = stddev;
		Seed = seed;
	}

	RandomNormal::~RandomNormal()
	{
	}

	array RandomNormal::Generate(int shape[])
	{
		auto result = randn(get_dims(shape));
		result = constant<float>(Mean, get_dims(shape)) * result + constant<float>(StdDev, get_dims(shape));

		return result;
	}
}
