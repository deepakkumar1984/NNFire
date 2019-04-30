#pragma once
#include "BaseConstraint.h"

namespace nn
{
	namespace constraint {
		class NonNeg :
			public BaseConstraint
		{
		public:
			NonNeg();
			~NonNeg();

			array Call(const array& x);
		};
	}
}

