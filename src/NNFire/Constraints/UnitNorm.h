#pragma once
#include "BaseConstraint.h"

namespace nn
{
	namespace constraint {
		class UnitNorm :
			public BaseConstraint
		{
		public:
			int Axis;
			UnitNorm(const int axis = 0);
			~UnitNorm();

			array Call(const array& x);
		};
	}
}

