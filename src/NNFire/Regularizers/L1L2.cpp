#include "L1L2.h"

namespace nn
{
	namespace regularizer {

		L1L2::L1L2(float l1, float l2) : BaseRegularizer(l1, l2)
		{
			Name = "L1_L2";
		}

		L1L2::~L1L2()
		{
		}

		float L1L2::Calculate(array x)
		{
			float result = 0;
			if (L1 > 0)
			{
				result = sum_all(L1 * abs(x)) + result;
			}

			if (L2 > 0)
			{
				result = sum_all(L1 * pow2(x)) + result;
			}

			return result;
		}

		array L1L2::Gradient(array x)
		{
			array grad = array::array();

			if (L1 > 0)
			{
				grad += (L1 * x) / (abs(x) + Epsilon);
			}

			if (L2 > 0)
			{
				grad += (2 * L2 * x);
			}

			return grad;
		}

		
	}
}