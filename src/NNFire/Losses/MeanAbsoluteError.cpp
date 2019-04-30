#include "MeanAbsoluteError.h"


namespace nn
{
	namespace losses {
		MeanAbsoluteError::MeanAbsoluteError() : BaseLoss("mean_absolute_error")
		{
		}


		MeanAbsoluteError::~MeanAbsoluteError()
		{
		}

		array MeanAbsoluteError::Forward(const array preds, const array labels)
		{
			return ravel(mean(abs(preds - labels), 1));
		}

		array MeanAbsoluteError::Backward(const array preds, const array labels)
		{
			auto n = preds.dims()[0];
			return -1 * tanh(labels - preds) / n;
		}
	}
}