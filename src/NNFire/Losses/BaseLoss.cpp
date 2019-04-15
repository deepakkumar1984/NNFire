#include "BaseLoss.h"

namespace nn
{
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

	BaseLoss BaseLoss::Get(Global::LossType lossType)
	{
		BaseLoss result = BaseLoss::BaseLoss("loss");
		switch (lossType)
		{
		case nn::Global::MeanSquaredError:
			break;
		case nn::Global::MeanAbsoluteError:
			break;
		case nn::Global::MeanAbsolutePercentageError:
			break;
		case nn::Global::MeanAbsoluteLogError:
			break;
		case nn::Global::SquaredHinge:
			break;
		case nn::Global::Hinge:
			break;
		case nn::Global::BinaryCrossEntropy:
			break;
		case nn::Global::CategorialCrossEntropy:
			break;
		case nn::Global::KullbackLeiblerDivergence:
			break;
		case nn::Global::Logcosh:
			break;
		case nn::Global::Poisson:
			break;
		case nn::Global::CosineProximity:
			break;
		case nn::Global::CTC:
			break;
		default:
			break;
		}

		return result;
	}


}