#pragma once
#include "BaseMetric.h"

namespace nn
{
	class BinaryAccuracy :
		public BaseMetric
	{
	public:
		BinaryAccuracy();
		~BinaryAccuracy();

		array Calculate(const array preds, const array labels);
	};
}

