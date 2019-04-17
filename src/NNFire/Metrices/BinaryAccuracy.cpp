#include "BinaryAccuracy.h"

namespace nn
{
	BinaryAccuracy::BinaryAccuracy() : BaseMetric("binary_accuracy")
	{
	}

	BinaryAccuracy::~BinaryAccuracy()
	{
	}

	array BinaryAccuracy::Calculate(const array preds, const array labels)
	{
		auto p = round(clamp(preds, 0, 1));
		
		af_array eqResult = NULL;
		af_eq(&eqResult, preds.get(), labels.get(), false);

		return array(eqResult);
	}
}
