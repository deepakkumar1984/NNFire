#include "Constant.h"

namespace nn
{
	namespace initializer {
		Constant::Constant(const float value) : BaseInitializer("constant")
		{
			Value = value;
		}

		Constant::~Constant()
		{
		}

		array Constant::Generate(int shape[])
		{
			auto dims = get_dims(shape);

			return constant<float>(Value, dims);
		}
	}
}
