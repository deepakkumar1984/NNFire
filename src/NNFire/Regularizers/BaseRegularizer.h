#pragma once
#include "../CommonIncludes.h"

namespace nn {
	namespace regularizer {
		class BaseRegularizer :
			public Global
		{
		public:
			std::string Name;
			float L1;
			float L2;

			BaseRegularizer(float l1 = 0.01, float l2 = 0.01);
			~BaseRegularizer();

			virtual float Calculate(array x);
			virtual array Gradient(array x);
		};
	}
}

