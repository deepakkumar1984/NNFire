#include "MAE.h"

namespace nn
{
	MAE::MAE() : BaseMetric("mae")
	{
	}

	MAE::~MAE()
	{
	}

	array MAE::Calculate(const array preds, const array labels)
	{
		auto loss = nn::MeanAbsoluteError::MeanAbsoluteError();
		return loss.Forward(preds, labels);
	}
}
