#pragma once
#include "BaseConstraint.h"

namespace nn
{
	class MaxNorm :
		public BaseConstraint
	{
	public:
		float MaxValue;
		int Axis;
		MaxNorm(const float max = 2, const int axis = 0);
		~MaxNorm();

		array Call(const array& x);
	};
}

