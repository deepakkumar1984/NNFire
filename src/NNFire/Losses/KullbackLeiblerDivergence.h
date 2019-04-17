#pragma once
#include "BaseLoss.h"

namespace nn
{
	class KullbackLeiblerDivergence :
		public BaseLoss
	{
	public:
		KullbackLeiblerDivergence();
		~KullbackLeiblerDivergence();

		array Forward(const array preds, const array labels);
		array Backward(const array preds, const array labels);
	};
}

