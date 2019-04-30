#pragma once
#include "../BaseLayer.h"
namespace nn {
	namespace layer {
		class LeakyReLU :
			public BaseLayer
		{
		public:
			float Alpha;

			LeakyReLU(float alpha = 0.3);
			~LeakyReLU();

			void Forward(array x);
			array Backward(array outGrad);
		};
	}
}

