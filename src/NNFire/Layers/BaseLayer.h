#pragma once
#include "../CommonIncludes.h"
#include "../Parameter.h"
#include <map>

namespace nn {
	namespace layer {
		class BaseLayer :
			public Global
		{
		public:
			std::string Name;
			bool SkipPred;
			array Input;
			array Output;
			std::map<std::string, Parameter> Params;
			std::map<std::string, Parameter> Grads;

			BaseLayer(std::string name);
			~BaseLayer();

			virtual void Forward(array x);
			virtual array Backward(array outGrad);
		};
	}
}

