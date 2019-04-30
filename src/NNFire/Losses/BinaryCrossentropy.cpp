#include "BinaryCrossentropy.h"

namespace nn
{
	namespace loss {
		BinaryCrossentropy::BinaryCrossentropy(bool fromLogit)
			: BaseLoss("binary_crossentropy")
		{
			FromLogit = fromLogit;
		}


		BinaryCrossentropy::~BinaryCrossentropy()
		{
		}

		array BinaryCrossentropy::Forward(const array preds, const array labels)
		{
			array output = preds;
			if (!FromLogit)
			{
				output = clamp(output, Epsilon, 1 - Epsilon);
				output = log(output / (1 - output));
			}

			output = sigmoid(output);

			return labels * -log(output) + (1 - labels) * -log(1 - output);
		}

		array BinaryCrossentropy::Backward(const array preds, const array labels)
		{
			array output = preds;
			if (!FromLogit)
			{
				output = clamp(preds, Epsilon, 1 - Epsilon);
			}

			return (output - labels) / (output * (1 - output));
		}
	}
}
