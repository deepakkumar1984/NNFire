#pragma once
#include "BaseLoss.h"
namespace nn
{
	class CategoricalCrossentropy :
		public BaseLoss
	{
	public:
		bool FromLogit;
		CategoricalCrossentropy(bool fromLogit = false);
		~CategoricalCrossentropy();

		array Forward(const array preds, const array labels);
		array Backward(const array preds, const array labels);
	};
}
