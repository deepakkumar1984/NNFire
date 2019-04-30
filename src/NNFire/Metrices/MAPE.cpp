#include "MAPE.h"

namespace nn
{
	namespace metric {
		using namespace loss;
		MAPE::MAPE() : BaseMetric("mape")
		{
		}

		MAPE::~MAPE()
		{
		}

		array MAPE::Calculate(const array preds, const array labels)
		{
			auto m = MeanAbsolutePercentageError::MeanAbsolutePercentageError();
			return m.Forward(preds, labels);

		}
	}
}
