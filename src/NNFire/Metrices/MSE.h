#pragma once
#include "BaseMetric.h"
#include "../Losses/MeanSquaredError.h"

namespace nn
{
	namespace metric {
		class MSE :
			public BaseMetric
		{
		public:
			MSE();
			~MSE();

			array Calculate(const array preds, const array labels);
		};
	}
}

