#include "Constraints.h"

namespace nn
{
	Constraints::Constraints()
	{
	}


	Constraints::~Constraints()
	{
	}

	BaseConstraint* nn::Constraints::MaxNorm(const float max, const int axis)
	{
		BaseConstraint *obj = new nn::MaxNorm(max, axis);
		return obj;
	}

	BaseConstraint* nn::Constraints::MinMaxNorm(const float minValue, const float maxValue, const float rate, const int axis)
	{
		BaseConstraint* obj = new nn::MinMaxNorm(minValue, maxValue, rate, axis);
		return obj;
	}

	BaseConstraint* nn::Constraints::NonNeg()
	{
		BaseConstraint* obj = new nn::NonNeg();
		return obj;
	}

	BaseConstraint* nn::Constraints::UnitNorm(const int axis)
	{
		BaseConstraint* obj = new nn::UnitNorm(axis);
		return obj;
	}
}
