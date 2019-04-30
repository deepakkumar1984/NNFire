#include "MSLE.h"

namespace nn
{
	namespace metrices {
		using namespace losses;

		MSLE::MSLE() : BaseMetric("msle")
		{
		}

		MSLE::~MSLE()
		{
		}

		array MSLE::Calculate(const array preds, const array labels)
		{
			auto m = MeanSquaredLogError::MeanSquaredLogError();
			return m.Forward(preds, labels);

		}
	}
}
