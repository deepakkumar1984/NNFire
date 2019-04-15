#pragma once
#include "BaseConstraint.h"

namespace nn
{
	class MinMaxNorm :
		public BaseConstraint
	{
	public:
		float MinValue;
		float MaxValue;
		float Rate;
		int Axis;

		MinMaxNorm(const float minValue = 0, const float maxValue = 1, const float rate = 1, const int axis = 0);
		~MinMaxNorm();

		array Call(const array& x);
	};
}

