#pragma once
#include "Constraints/BaseConstraint.h"
#include "Constraints/MaxNorm.h"
#include "Constraints/MinMaxNorm.h"
#include "Constraints/NonNeg.h"
#include "Constraints/UnitNorm.h"

namespace nn
{
	using namespace constraint;
	class Constraints
	{
	public:
		Constraints();
		~Constraints();

		static BaseConstraint* MaxNorm(const float max = 2, const int axis = 0);
		static BaseConstraint* MinMaxNorm(const float minValue = 0, const float maxValue = 1, const float rate = 1, const int axis = 0);
		static BaseConstraint* NonNeg();
		static BaseConstraint* UnitNorm(const int axis = 0);
	};
}
