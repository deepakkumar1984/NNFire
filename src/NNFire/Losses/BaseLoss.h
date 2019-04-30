#pragma once
#include "../CommonIncludes.h"

namespace nn
{
	namespace losses {
		class BaseLoss : public Global
		{
		public:
			std::string Name;

			BaseLoss(std::string name);
			~BaseLoss();

			virtual array Forward(const array preds, const array labels);
			virtual array Backward(const array preds, const array labels);

			static BaseLoss Get(nn::LossType lossType);
		};
	}
}

