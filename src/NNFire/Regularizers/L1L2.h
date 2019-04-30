#pragma once
#include "BaseRegularizer.h"

namespace nn
{
	namespace regularizer {
		class L1L2 :
			public BaseRegularizer
		{
		public:
			L1L2(float l1 = 0.01f, float l2 = 0.01f);
			~L1L2();

			float Calculate(array x);
			array Gradient(array x);
		};
	}
}

