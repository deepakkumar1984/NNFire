#pragma once
#include "BaseLoss.h"

namespace nn
{
	class MeanSquaredError :
		public BaseLoss
	{
	public:
		MeanSquaredError();
		~MeanSquaredError();

		array Forward(const array preds, const array labels);
		array Backward(const array preds, const array labels);
	};
}

