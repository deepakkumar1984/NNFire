#include "Hinge.h"

namespace nn
{
	Hinge::Hinge() : BaseLoss("hinge")
	{
	}


	Hinge::~Hinge()
	{
	}

	array Hinge::Forward(const array preds, const array labels)
	{
		return mean(afmaximum(1 - labels * preds, 0), 1);
	}

	array Hinge::Backward(const array preds, const array labels)
	{
		int n = preds.dims()[0];

		return -afmaximum(labels / n, 0);
	}
}