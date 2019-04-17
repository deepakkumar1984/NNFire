#include "Poisson.h"


namespace nn
{
	Poisson::Poisson() : BaseLoss("poisson")
	{
	}


	Poisson::~Poisson()
	{
	}

	array Poisson::Forward(const array preds, const array labels)
	{
		return mean(preds - labels * log(preds + Epsilon), 1);
	}

	array Poisson::Backward(const array preds, const array labels)
	{
		return (1 - (labels / (preds + Epsilon))) / preds.dims()[0];
	}
}