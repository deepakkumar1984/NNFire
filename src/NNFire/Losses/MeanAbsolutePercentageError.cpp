#include "MeanAbsolutePercentageError.h"


namespace nn
{
	MeanAbsolutePercentageError::MeanAbsolutePercentageError() : BaseLoss("mean_absolute_percentage_error")
	{
	}


	MeanAbsolutePercentageError::~MeanAbsolutePercentageError()
	{
	}

	array MeanAbsolutePercentageError::Forward(const array preds, const array labels)
	{
		auto diff = abs(preds - labels) / clamp(abs(labels), Epsilon, std::numeric_limits<float>::max());
		return 100 * ravel(mean(diff, 1));
	}

	array MeanAbsolutePercentageError::Backward(const array preds, const array labels)
	{
		auto diff = (preds - labels) / clamp(abs(labels) * abs(labels - preds), Epsilon, std::numeric_limits<float>::max());
		return 100 * diff / preds.dims()[0];
	}
}