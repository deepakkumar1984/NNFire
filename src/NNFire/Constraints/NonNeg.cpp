#include "NonNeg.h"

namespace nn
{
	namespace constraint {
		NonNeg::NonNeg()
		{
		}


		NonNeg::~NonNeg()
		{
		}

		array NonNeg::Call(const array& x)
		{
			return x * (x >= 0);
		}
	}
}
