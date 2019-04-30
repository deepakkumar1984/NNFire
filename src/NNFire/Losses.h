#pragma once
#include "Losses/BaseLoss.h"
#include "Losses/BinaryCrossentropy.h"
#include "Losses/CategorialHinge.h"
#include "Losses/CategoricalCrossentropy.h"
#include "Losses/CosineProximity.h"
#include "Losses/Hinge.h"
#include "Losses/KullbackLeiblerDivergence.h"
#include "Losses/LogCosh.h"
#include "Losses/MeanAbsoluteError.h"
#include "Losses/MeanAbsolutePercentageError.h"
#include "Losses/MeanSquaredError.h"
#include "Losses/MeanSquaredLogError.h"
#include "Losses/Poisson.h"
#include "Losses/SquaredHinge.h"

namespace nn
{
	using namespace nn::loss;

	class Loss
	{
	public:
		Loss();
		~Loss();

		static BaseLoss* BinaryCrossentropy(bool fromLogit = false);
		static BaseLoss* CategorialHinge();
		static BaseLoss* CategoricalCrossentropy(bool fromLogit = false);
		static BaseLoss* CosineProximity();
		static BaseLoss* Hinge();
		static BaseLoss* KullbackLeiblerDivergence();
		static BaseLoss* LogCosh();
		static BaseLoss* MeanAbsoluteError();
		static BaseLoss* MeanAbsolutePercentageError();
		static BaseLoss* MeanSquaredError();
		static BaseLoss* MeanSquaredLogError();
		static BaseLoss* Poisson();
		static BaseLoss* SquaredHinge();
	};
}

