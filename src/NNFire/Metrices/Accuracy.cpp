#include "Accuracy.h"

namespace nn
{
	namespace metrices {
		Accuracy::Accuracy() : BaseMetric("accuracy")
		{
		}

		Accuracy::~Accuracy()
		{
		}

		array Accuracy::Calculate(const array preds, const array labels)
		{
			auto p = argmax(preds);
			auto l = argmax(labels);

			return p == l;
		}
	}
}
