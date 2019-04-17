#include "LogCosh.h"


namespace nn
{
	LogCosh::LogCosh() : BaseLoss("logcosh")
	{
	}


	LogCosh::~LogCosh()
	{
	}

	array LogCosh::Forward(const array preds, const array labels)
	{
		return mean(_logcosh(preds - labels), 1);
	}

	array LogCosh::Backward(const array preds, const array labels)
	{
		auto n = preds.dims()[0];
		return -1 * tanh(labels - preds) / n;
	}

	array LogCosh::_logcosh(array x)
	{
		return x + softplus(-2 * x) - log(2);
	}
}