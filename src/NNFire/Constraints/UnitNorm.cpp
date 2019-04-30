#include "UnitNorm.h"

namespace nn
{
	namespace constraint {
		UnitNorm::UnitNorm(const int axis)
		{
		}

		UnitNorm::~UnitNorm()
		{
		}

		array UnitNorm::Call(const array& x)
		{
			return x / (Epsilon + sqrt(sum(pow2(x), Axis)));
		}
	}
}
