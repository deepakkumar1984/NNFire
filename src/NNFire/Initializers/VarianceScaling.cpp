#include "VarianceScaling.h"
#include <cmath>

namespace nn
{
	namespace initializers {
		VarianceScaling::VarianceScaling(const float scale, std::string mode, std::string distribution, const int seed)
			: BaseInitializer("variance_scaling")
		{
			if (scale < 1)
			{
				throw new std::invalid_argument("Scale must be positive value");
			}

			if (mode.compare("fan_in") > 0 && mode.compare("fan_out") > 0 && mode.compare("fav_avg") > 0)
			{
				throw new std::invalid_argument("Invalid mode. Correct values fan_in, fan_out, fan_avg");
			}

			if (distribution.compare("normal") > 0 && distribution.compare("uniform") > 0)
			{
				throw new std::invalid_argument("Invalid distribution. Correct values normal, uniform");
			}

			Scale = scale;
			Mode = mode;
			Distribution = distribution;
			Seed = seed;
		}

		VarianceScaling::~VarianceScaling()
		{
		}

		array VarianceScaling::Generate(int shape[])
		{
			array result = NULL;
			float hwScale = 1;
			int shape_size = size_of(shape);
			if (shape_size > 2)
			{
				for (int i = 2; i < shape_size; ++i)
					hwScale *= shape[i];
			}

			auto in = shape[1] * hwScale;
			auto out = shape[0] * hwScale;
			float factor = 1.0;
			if (Mode == "fan_avg")
			{
				factor = Scale / std::fmax(1, (in + out) / 2.0f);
			}
			else if (Mode == "fan_in")
			{
				factor = Scale / std::fmax(1, in);
			}
			else if (Mode == "fan_out")
			{
				factor = Scale / std::fmax(1, out);
			}

			if (Distribution == "uniform")
			{
				float limit = sqrt(3 * factor);
				result = random_uniform(shape, -limit, limit, Seed);
			}
			else if (Distribution == "normal")
			{
				float stddev = sqrt(factor) / 0.87962566103423978f;
				result = random_uniform(shape, 0, stddev, Seed);
			}

			return result;
		}

		array VarianceScaling::random_normal(int shape[], float mean, float stddev, int seed)
		{
			//ToDo: use seed
			auto result = randn(get_dims(shape));
			if (mean != 0 || stddev != 0)
			{
				result = constant<float>(mean, get_dims(shape)) * result + constant<float>(stddev, get_dims(shape));
			}

			return result;
		}

		array VarianceScaling::random_uniform(int shape[], float min, float max, int seed)
		{
			//ToDo: use seed
			auto result = randu(get_dims(shape));
			if (min != 0 || max != 0)
			{
				result = constant<float>((max - min), get_dims(shape)) * result + constant<float>(min, get_dims(shape));
			}

			return result;
		}
	}
}
