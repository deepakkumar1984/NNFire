#include "LeakyReLU.h"

namespace nn {
	namespace layer {

		LeakyReLU::LeakyReLU(float alpha) : BaseLayer("leaky_relu")
		{
			Alpha = alpha;
		}

		LeakyReLU::~LeakyReLU()
		{
		}

		void LeakyReLU::Forward(array x)
		{
			Forward(x);
			auto keepElements = x >= 0;
			Output = (x * keepElements) + (Alpha * x * (1 - keepElements));
		}

		array LeakyReLU::Backward(array outGrad)
		{
			auto keepElements = Input >= 0;
			return outGrad * (keepElements + (Alpha * (1 - keepElements)));
		}
	}
}
