#include "MSE.h"

namespace nn
{
	namespace metrices {
		using namespace losses;
		MSE::MSE() : BaseMetric("mse")
		{
		}

		MSE::~MSE()
		{
		}

		array MSE::Calculate(const array preds, const array labels)
		{
			auto m = MeanSquaredError::MeanSquaredError();
			return m.Forward(preds, labels);

		}
	}
}
