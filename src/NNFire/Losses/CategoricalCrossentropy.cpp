#include "CategoricalCrossentropy.h"

namespace nn
{
	namespace loss {
		CategoricalCrossentropy::CategoricalCrossentropy(bool fromLogit)
			: BaseLoss("categorical_crossentropy")
		{
			FromLogit = fromLogit;
		}


		CategoricalCrossentropy::~CategoricalCrossentropy()
		{
		}

		array CategoricalCrossentropy::Forward(const array preds, const array labels)
		{
			array result = preds;
			if (FromLogit)
			{
				result = softmax(result);
			}
			else
			{
				result = result / sum(preds, 1);
			}

			result = clamp(result, Epsilon, 1 - Epsilon);
			return sum(-labels * log(result), -1);
		}

		array CategoricalCrossentropy::Backward(const array preds, const array labels)
		{
			auto result = clamp(preds, Epsilon, 1 - Epsilon);
			return (result - labels) / preds;
		}
	}
}