#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		BaseLoss::BaseLoss(std::string name)
		{
		}

		BaseLoss::~BaseLoss()
		{
		}

		array BaseLoss::Forward(const array preds, const array labels)
		{
			return array();
		}

		array BaseLoss::Backward(const array preds, const array labels)
		{
			return array();
		}

		BaseLoss BaseLoss::Get(nn::LossType lossType)
		{
			BaseLoss result = BaseLoss::BaseLoss("loss");
			switch (lossType)
			{
			case nn::LossType::MeanSquaredError:
				break;
			case nn::LossType::MeanAbsoluteError:
				break;
			case nn::LossType::MeanAbsolutePercentageError:
				break;
			case nn::LossType::MeanAbsoluteLogError:
				break;
			case nn::LossType::SquaredHinge:
				break;
			case nn::LossType::Hinge:
				break;
			case nn::LossType::BinaryCrossEntropy:
				break;
			case nn::LossType::CategorialCrossEntropy:
				break;
			case nn::LossType::KullbackLeiblerDivergence:
				break;
			case nn::LossType::Logcosh:
				break;
			case nn::LossType::Poisson:
				break;
			case nn::LossType::CosineProximity:
				break;
			case nn::LossType::CTC:
				break;
			default:
				break;
			}

			return result;
		}

	}
}