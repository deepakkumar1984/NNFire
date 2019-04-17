#include "MAPE.h"

namespace nn
{
	MAPE::MAPE() : BaseMetric("mape")
	{
	}

	MAPE::~MAPE()
	{
	}

	array MAPE::Calculate(const array preds, const array labels)
	{
		auto loss = nn::MeanAbsolutePercentageError::MeanAbsolutePercentageError();
		return loss.Forward(preds, labels);
	}
}
