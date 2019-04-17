#include "MeanSquaredError.h"


namespace nn
{
	MeanSquaredError::MeanSquaredError() : BaseLoss("mean_squared_error")
	{
	}


	MeanSquaredError::~MeanSquaredError()
	{
	}

	array MeanSquaredError::Forward(const array preds, const array labels)
	{
		return mean(pow2(preds - labels), 1);
	}

	array MeanSquaredError::Backward(const array preds, const array labels)
	{
		float norm = 2 / preds.dims()[0];
		return (preds - labels) * norm;
	}
}