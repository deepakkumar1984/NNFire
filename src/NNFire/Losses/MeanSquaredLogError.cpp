#include "MeanSquaredLogError.h"


namespace nn
{
	namespace loss {
		MeanSquaredLogError::MeanSquaredLogError() : BaseLoss("mean_squared_logarithmic_error")
		{
		}


		MeanSquaredLogError::~MeanSquaredLogError()
		{
		}

		array MeanSquaredLogError::Forward(const array preds, const array labels)
		{
			auto first_log = log(clamp(preds, Epsilon, std::numeric_limits<float>::max()) + 1);
			auto second_log = log(clamp(labels, Epsilon, std::numeric_limits<float>::max()) + 1);
			return mean(pow2(first_log - second_log), 1);
		}

		array MeanSquaredLogError::Backward(const array preds, const array labels)
		{
			float norm = 2 / preds.dims()[0];
			auto first_log = log(clamp(preds, Epsilon, std::numeric_limits<float>::max()) + 1);
			auto second_log = log(clamp(labels, Epsilon, std::numeric_limits<float>::max()) + 1);

			return norm * (first_log - second_log) / (clamp(preds, Epsilon, std::numeric_limits<float>::max()) + 1);
		}
	}
}