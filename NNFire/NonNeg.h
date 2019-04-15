#pragma once
#include "BaseConstraint.h"

namespace nn
{
	class NonNeg :
		public BaseConstraint
	{
	public:
		NonNeg();
		~NonNeg();

		array Call(const array& x);
	};
}

