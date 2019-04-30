#include "Regularizers.h"

namespace nn
{
	Regularizers::Regularizers()
	{
	}


	Regularizers::~Regularizers()
	{
	}

	BaseRegularizer* Regularizers::L1L2(float l1, float l2)
	{
		BaseRegularizer* obj = new nn::regularizer::L1L2(l1, l2);
		return obj;
	}

	BaseRegularizer* Regularizers::L1(float l)
	{
		BaseRegularizer* obj = new nn::regularizer::L1(l);
		return obj;
	}

	BaseRegularizer* Regularizers::L2(float l)
	{
		BaseRegularizer* obj = new nn::regularizer::L2(l);
		return obj;
	}
}
