#include "BaseLayer.h"

namespace nn {
	namespace layer {

		BaseLayer::BaseLayer(std::string name)
		{
			Name = name;
		}

		BaseLayer::~BaseLayer()
		{
		}

		void BaseLayer::Forward(array x)
		{
			Input = x;
		}

		array BaseLayer::Backward(array outGrad)
		{
			return array();
		}
	}
}