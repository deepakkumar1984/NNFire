#include "MinMaxNorm.h"

namespace nn
{
	MinMaxNorm::MinMaxNorm(const float minValue, const float maxValue, const float rate, const int axis)
	{
		MinValue = minValue;
		MaxValue = maxValue;
		Rate = rate;
		Axis = axis;
	}

	MinMaxNorm::~MinMaxNorm()
	{
	}

	array MinMaxNorm::Call(const array& x)
	{
		array norms = sqrt(sum(pow2(x), Axis));
		auto desired = Rate * clamp(norms, MinValue, MaxValue) + (1 - Rate) * norms;
		return x * (desired / Epsilon + norms);
	}
}
