#pragma once
#include "BaseMetric.h"
#include "../Losses/MeanAbsolutePercentageError.h"

namespace nn
{
	namespace metric {
		class MAPE :
			public BaseMetric
		{
		public:
			MAPE();
			~MAPE();

			array Calculate(const array preds, const array labels);
		};
	}
}

