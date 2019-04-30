#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace losses {
		class BinaryCrossentropy :
			public BaseLoss
		{
		public:
			bool FromLogit;
			BinaryCrossentropy(bool fromLogit = false);
			~BinaryCrossentropy();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);
		};
	}
}
