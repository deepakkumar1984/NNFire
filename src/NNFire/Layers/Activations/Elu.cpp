#include "Elu.h"

namespace nn {
	namespace layer {

		Elu::Elu(float alpha) : BaseLayer("elu")
		{
			Alpha = alpha;
		}

		Elu::~Elu()
		{
		}

		void nn::layer::Elu::Forward(array x)
		{
			Forward(x);
			auto keepElements = x > 0;
			auto keepElements_Exp = x < 0;
			auto d = Alpha * (exp(x * keepElements_Exp) - 1);
			Output = (x * keepElements) + d;
		}

		array nn::layer::Elu::Backward(array outGrad)
		{
			auto keepElements = Input > 0;
			auto keepElements_Exp = Input < 0;
			auto d = Alpha * exp(Input * keepElements_Exp);
			return outGrad * d;
		}
	}
}
