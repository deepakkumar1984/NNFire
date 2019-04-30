#pragma once
#include "../BaseLayer.h"
namespace nn {
	namespace layer {
		class Exp :
			public BaseLayer
		{
		public:
			Exp();
			~Exp();

			void Forward(array x);
			array Backward(array outGrad);
		};
	}
}

