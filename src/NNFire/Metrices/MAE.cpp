#include "MAE.h"

namespace nn
{
	namespace metrices {
		using namespace losses;
		MAE::MAE() : BaseMetric("mae")
		{
		}

		MAE::~MAE()
		{
		}

		array MAE::Calculate(const array preds, const array labels)
		{
			auto m = MeanAbsoluteError::MeanAbsoluteError();
			return m.Forward(preds, labels);

		}
	}
}
