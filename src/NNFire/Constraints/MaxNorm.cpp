#include "MaxNorm.h"

namespace nn
{
	namespace constraint {
		MaxNorm::MaxNorm(const float max, const int axis)
		{
			MaxValue = max;
			Axis = axis;
		}

		MaxNorm::~MaxNorm()
		{
		}

		array MaxNorm::Call(const array& x)
		{
			array norms = sqrt(sum(pow2(x), Axis));
			array desired = clamp(norms, 0, MaxValue);

			auto result = (desired / (Epsilon + norms));

			return result;
		}
	}
}
