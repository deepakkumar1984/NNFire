#include "BinaryAccuracy.h"

namespace nn
{
	namespace metrices {
		BinaryAccuracy::BinaryAccuracy() : BaseMetric("binary_accuracy")
		{
		}

		BinaryAccuracy::~BinaryAccuracy()
		{
		}

		array BinaryAccuracy::Calculate(const array preds, const array labels)
		{
			auto p = round(clamp(preds, 0, 1));

			return p == labels;
		}
	}
}
