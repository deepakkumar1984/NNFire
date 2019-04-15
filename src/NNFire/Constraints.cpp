#include "Constraints.h"

Global G = Global::Global();

Constraints::Constraints()
{
}


Constraints::~Constraints()
{
}

array Constraints::MaxNorm(const array &x, const float maxValue, const int axis)
{
	array norms = sqrt(sum(pow2(x), axis));
	auto desired = clamp(norms, 0, maxValue);
	
	auto result = x;
	return result;
}

array Constraints::MinMaxNorm(const array & x, const float minValue, const float maxValue, const float rate, const int axis)
{
	array norms = sqrt(sum(pow2(x), axis));
	auto desired = rate * clamp(norms, minValue, maxValue) + (1 - rate) * norms;
	return x * (desired / G.Epsilon() + norms);
}

array Constraints::NonNeg(const array & x)
{
	return x * (x >= 0);
}

array Constraints::UnitNorm(const array & x, const int axis)
{
	return x / (G.Epsilon() + sqrt(sum(pow2(x), axis)));
}
