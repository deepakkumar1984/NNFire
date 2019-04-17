#include "KullbackLeiblerDivergence.h"


namespace nn
{
	KullbackLeiblerDivergence::KullbackLeiblerDivergence() : BaseLoss("kullback_leibler_divergence")
	{
	}


	KullbackLeiblerDivergence::~KullbackLeiblerDivergence()
	{
	}

	array KullbackLeiblerDivergence::Forward(const array preds, const array labels)
	{
		auto y_true = clamp(labels, Epsilon, 1); 
		auto y_pred = clamp(preds, Epsilon, 1);

		return sum(y_true * log(y_true / y_pred), -1);
	}

	array KullbackLeiblerDivergence::Backward(const array preds, const array labels)
	{
		auto y_true = clamp(labels, Epsilon, 1);
		auto y_pred = clamp(preds, Epsilon, 1);

		return maximum((-1 * (y_true / y_pred)), 0);
	}
}