#include "MAE.h"

namespace nn
{
	namespace metric {
		using namespace loss;
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
