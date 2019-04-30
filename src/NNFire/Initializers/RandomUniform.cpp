#include "RandomUniform.h"

namespace nn
{
	namespace initializer {
		RandomUniform::RandomUniform(float min, float max, int seed)
			: BaseInitializer("random_uniform")
		{
			Min = min;
			Max = max;
			Seed = seed;
		}

		RandomUniform::~RandomUniform()
		{
		}

		array RandomUniform::Generate(int shape[])
		{
			//ToDo: use seed
			auto result = randu(get_dims(shape));
			result = constant<float>((Max - Min), get_dims(shape)) * result + constant<float>(Min, get_dims(shape));

			return result;
		}
	}
}
