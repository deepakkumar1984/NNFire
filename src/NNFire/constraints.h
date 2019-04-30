#pragma once
#include "Constraints/BaseConstraint.h"
#include "Constraints/MaxNorm.h"
#include "Constraints/MinMaxNorm.h"
#include "Constraints/NonNeg.h"
#include "Constraints/UnitNorm.h"

namespace nn
{
	class Constraints
	{
	public:
		Constraints();
		~Constraints();

		BaseConstraint* MaxNorm(const float max = 2, const int axis = 0);
		BaseConstraint* MinMaxNorm(const float minValue = 0, const float maxValue = 1, const float rate = 1, const int axis = 0);
		BaseConstraint* NonNeg();
		BaseConstraint* UnitNorm(const int axis = 0);
	};
}
