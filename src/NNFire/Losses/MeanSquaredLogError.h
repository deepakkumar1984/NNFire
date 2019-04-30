#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		class MeanSquaredLogError :
			public BaseLoss
		{
		public:
			MeanSquaredLogError();
			~MeanSquaredLogError();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);
		};
	}
}

