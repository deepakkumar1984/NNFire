#pragma once
#include "Initializers/BaseInitializer.h"
#include "Initializers/Constant.h"
#include "Initializers/GlorotNormal.h"
#include "Initializers/GlorotUniform.h"
#include "Initializers/HeNormal.h"
#include "Initializers/HeUniform.h"
#include "Initializers/LecunNormal.h"
#include "Initializers/LecunUniform.h"
#include "Initializers/Ones.h"
#include "Initializers/RandomNormal.h"
#include "Initializers/RandomUniform.h"
#include "Initializers/VarianceScaling.h"
#include "Initializers/Zeros.h"

namespace nn
{
	class Initializers
	{
	public:
		Initializers();
		~Initializers();

		static BaseInitializer* Constant(float value);
		static BaseInitializer* Ones();
		static BaseInitializer* Zeros();
		static BaseInitializer* GlorotNormal(int seed = 0);
		static BaseInitializer* GlorotUniform(int seed = 0);
		static BaseInitializer* HeNormal(int seed = 0);
		static BaseInitializer* HeUniform(int seed = 0);
		static BaseInitializer* LecunNormal(int seed = 0);
		static BaseInitializer* LecunUniform(int seed = 0);
		static BaseInitializer* RandomNormal(float mean = 0, float stddev = 0, int seed = 0);
		static BaseInitializer* RandomUniform(float min = 0, float max = 0.05, int seed = 0);
		static BaseInitializer* VarianceScaling(const float scale = 1, std::string mode = "fan_in", std::string distribution = "normal", const int seed = 0);
	};
}
