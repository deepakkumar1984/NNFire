#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		class Hinge :
			public BaseLoss
		{
		public:
			Hinge();
			~Hinge();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);
		};
	}
}
