#pragma once
#include "BaseMetric.h"

namespace nn
{
	namespace metrices {
		class Accuracy :
			public BaseMetric
		{
		public:
			Accuracy();
			~Accuracy();

			array Calculate(const array preds, const array labels);
		};
	}
}

