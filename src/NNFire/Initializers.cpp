#include "Initializers.h"

namespace nn
{
	Initializers::Initializers()
	{
	}


	Initializers::~Initializers()
	{
	}

	BaseInitializer* nn::Initializers::Constant(float value)
	{
		BaseInitializer* obj = new nn::Constant(value);
		return obj;
	}

	BaseInitializer* nn::Initializers::Ones()
	{
		BaseInitializer* obj = new nn::Ones();
		return obj;
	}

	BaseInitializer* nn::Initializers::Zeros()
	{
		BaseInitializer* obj = new nn::Zeros();
		return obj;
	}

	BaseInitializer* nn::Initializers::GlorotNormal(int seed)
	{
		BaseInitializer* obj = new nn::GlorotNormal(seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::GlorotUniform(int seed)
	{
		BaseInitializer* obj = new nn::GlorotUniform(seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::HeNormal(int seed)
	{
		BaseInitializer* obj = new nn::HeNormal(seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::HeUniform(int seed)
	{
		BaseInitializer* obj = new nn::HeUniform(seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::LecunNormal(int seed)
	{
		BaseInitializer* obj = new nn::LecunNormal(seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::LecunUniform(int seed)
	{
		BaseInitializer* obj = new nn::LecunUniform(seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::RandomNormal(float mean, float stddev, int seed)
	{
		BaseInitializer* obj = new nn::RandomNormal(mean, stddev, seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::RandomUniform(float min, float max, int seed)
	{
		BaseInitializer* obj = new nn::RandomUniform(min, max, seed);
		return obj;
	}

	BaseInitializer* nn::Initializers::VarianceScaling(const float scale, std::string mode, std::string distribution, const int seed)
	{
		BaseInitializer* obj = new nn::VarianceScaling(scale, mode, distribution, seed);
		return obj;
	}
}
