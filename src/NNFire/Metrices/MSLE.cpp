#include "MSLE.h"

namespace nn
{
	MSLE::MSLE() : BaseMetric("msle")
	{
	}

	MSLE::~MSLE()
	{
	}

	array MSLE::Calculate(const array preds, const array labels)
	{
		auto loss = nn::MeanSquaredLogError::MeanSquaredLogError();
		return loss.Forward(preds, labels);
	}
}
