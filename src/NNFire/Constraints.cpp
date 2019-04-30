#include "constraints.h"

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
		BaseConstraint *obj = new nn::constraint::MaxNorm(max, axis);
		return obj;
	}

	BaseConstraint* nn::Constraints::MinMaxNorm(const float minValue, const float maxValue, const float rate, const int axis)
	{
		BaseConstraint* obj = new nn::constraint::MinMaxNorm(minValue, maxValue, rate, axis);
		return obj;
	}

	BaseConstraint* nn::Constraints::NonNeg()
	{
		BaseConstraint* obj = new nn::constraint::NonNeg();
		return obj;
	}

	BaseConstraint* nn::Constraints::UnitNorm(const int axis)
	{
		BaseConstraint* obj = new nn::constraint::UnitNorm(axis);
		return obj;
	}
}
