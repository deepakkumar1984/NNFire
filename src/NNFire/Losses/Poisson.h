#pragma once
#include "BaseLoss.h"

namespace nn
{
	class Poisson :
		public BaseLoss
	{
	public:
		Poisson();
		~Poisson();

		array Forward(const array preds, const array labels);
		array Backward(const array preds, const array labels);
	};
}

