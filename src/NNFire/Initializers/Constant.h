#pragma once
#include "BaseInitializer.h"

namespace nn
{
	namespace initializers {
		class Constant :
			public BaseInitializer
		{
		public:
			float Value;

			Constant(const float value = 0);
			~Constant();

			array Generate(int shape[]);
		};
	}
}

