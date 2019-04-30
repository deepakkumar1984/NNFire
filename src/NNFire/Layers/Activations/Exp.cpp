#include "Exp.h"

namespace nn {
	namespace layer {

		Exp::Exp() : BaseLayer("exp")
		{
		}

		Exp::~Exp()
		{
		}

		void Exp::Forward(array x)
		{
			Forward(x);
			
			Output = exp(x);
		}

		array Exp::Backward(array outGrad)
		{
			return outGrad * Output;
		}
	}
}
