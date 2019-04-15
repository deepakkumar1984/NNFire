#pragma once
#include "BaseLoss.h"

namespace nn
{
	class CosineProximity :
		public BaseLoss
	{
	public:
		CosineProximity();
		~CosineProximity();

		array Forward(const array preds, const array labels);
		array Backward(const array preds, const array labels);

	private:
		array cossine_sim(const array preds, const array labels);
	};
}

