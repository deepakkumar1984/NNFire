#pragma once
#include "BaseMetric.h"
#include "../Losses/MeanAbsoluteError.h"

namespace nn
{
	namespace metric {
		class MAE :
			public BaseMetric
		{
		public:
			MAE();
			~MAE();

			array Calculate(const array preds, const array labels);
		};
	}
}

