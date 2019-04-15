#pragma once
#include "BaseInitializer.h"

namespace nn
{
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

