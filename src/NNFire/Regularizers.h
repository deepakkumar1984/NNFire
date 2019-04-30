#pragma once
#include "Regularizers/BaseRegularizer.h"
#include "Regularizers/L1.h"
#include "Regularizers/L1L2.h"
#include "Regularizers/L2.h"

namespace nn {
	using namespace regularizer;
	class Regularizers
	{
	public:
		Regularizers();
		~Regularizers();

		static BaseRegularizer* L1L2(float l1 = 0.01f, float l2 = 0.01f);
		static BaseRegularizer* L1(float l = 0.01);
		static BaseRegularizer* L2(float l = 0.01);
	};
}

