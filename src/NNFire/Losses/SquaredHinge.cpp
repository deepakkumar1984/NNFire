#include "SquaredHinge.h"


namespace nn
{
	SquaredHinge::SquaredHinge() : BaseLoss("squared_hinge")
	{
	}


	SquaredHinge::~SquaredHinge()
	{
	}

	array SquaredHinge::Forward(const array preds, const array labels)
	{
		auto value = 1 - (labels * preds);
		return mean(pow2(maximum(value, 0)), 1);
	}

	array SquaredHinge::Backward(const array preds, const array labels)
	{
		float norm = -2 / preds.dims()[0];
		return norm * labels * maximum(1 - (labels * preds), 0);
	}
}