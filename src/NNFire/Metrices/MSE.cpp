#include "MSE.h"

namespace nn
{
	namespace metric {
		using namespace loss;
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
