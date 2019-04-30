#include "BaseRegularizer.h"

namespace nn {
	namespace regularizer {
		BaseRegularizer::BaseRegularizer(float l1, float l2)
		{
			L1 = l1;
			L2 = l2;
		}


		BaseRegularizer::~BaseRegularizer()
		{
		}

		float BaseRegularizer::Calculate(array x)
		{
			return 0.0f;
		}

		array BaseRegularizer::Gradient(array x)
		{
			return array();
		}
	}
}
