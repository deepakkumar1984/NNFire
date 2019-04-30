#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		class MeanAbsolutePercentageError :
			public BaseLoss
		{
		public:
			MeanAbsolutePercentageError();
			~MeanAbsolutePercentageError();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);
		};
	}
}

