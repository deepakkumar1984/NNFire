#include "MSE.h"

namespace nn
{
	MSE::MSE() : BaseMetric("mse")
	{
	}

	MSE::~MSE()
	{
	}

	array MSE::Calculate(const array preds, const array labels)
	{
		auto loss = nn::MeanSquaredError::MeanSquaredError();
		return loss.Forward(preds, labels);
	}
}
