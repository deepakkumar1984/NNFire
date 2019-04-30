#pragma once
#include "BaseMetric.h"

namespace nn
{
	namespace metrices {
		class BinaryAccuracy :
			public BaseMetric
		{
		public:
			BinaryAccuracy();
			~BinaryAccuracy();

			array Calculate(const array preds, const array labels);
		};
	}
}

