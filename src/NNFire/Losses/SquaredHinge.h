#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		class SquaredHinge :
			public BaseLoss
		{
		public:
			SquaredHinge();
			~SquaredHinge();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);
		};
	}
}

