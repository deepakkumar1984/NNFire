#pragma once
#include "../BaseLayer.h"
namespace nn {
	namespace layer {
		class Elu :
			public BaseLayer
		{
		public:
			float Alpha;

			Elu(float alpha = 1);
			~Elu();

			void Forward(array x);
			array Backward(array outGrad);
		};
	}
}

