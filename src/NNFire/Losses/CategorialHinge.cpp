#include "CategorialHinge.h"

namespace nn
{
	CategorialHinge::CategorialHinge() : BaseLoss("categorical_hinge")
	{
	}


	CategorialHinge::~CategorialHinge()
	{
	}

	array CategorialHinge::Forward(const array preds, const array labels)
	{
		auto pos = sum(labels * preds, 1);
		auto neg = max((1 - labels) * preds, 1);
		return maximum(neg - pos + 1, 0);
	}

	array CategorialHinge::Backward(const array preds, const array labels)
	{
		auto diff = (1 - labels) * preds - sum(labels * preds, 1);
		return maximum(diff, 0);
	}
}
