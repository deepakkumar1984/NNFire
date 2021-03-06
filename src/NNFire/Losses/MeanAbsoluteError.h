#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		class MeanAbsoluteError :
			public BaseLoss
		{
		public:
			MeanAbsoluteError();
			~MeanAbsoluteError();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);
		};
	}
}

