#pragma once
#include "BaseMetric.h"
#include "../Losses/MeanSquaredLogError.h"

namespace nn
{
	namespace metric {
		class MSLE :
			public BaseMetric
		{
		public:
			MSLE();
			~MSLE();

			array Calculate(const array preds, const array labels);
		};
	}
}

