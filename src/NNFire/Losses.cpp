#include "Losses.h"

namespace nn {

	Loss::Loss()
	{
	}


	Loss::~Loss()
	{
	}

	BaseLoss* Loss::BinaryCrossentropy(bool fromLogit)
	{
		BaseLoss* obj = new nn::loss::BinaryCrossentropy(fromLogit);
		return obj;
	}

	BaseLoss* Loss::CategorialHinge()
	{
		BaseLoss* obj = new nn::loss::CategorialHinge();
		return obj;
	}

	BaseLoss* Loss::CategoricalCrossentropy(bool fromLogit)
	{
		BaseLoss* obj = new nn::loss::CategoricalCrossentropy(fromLogit);
		return obj;
	}

	BaseLoss* Loss::CosineProximity()
	{
		BaseLoss* obj = new nn::loss::CosineProximity();
		return obj;
	}

	BaseLoss* Loss::Hinge()
	{
		BaseLoss* obj = new nn::loss::Hinge();
		return obj;
	}

	BaseLoss* Loss::KullbackLeiblerDivergence()
	{
		BaseLoss* obj = new nn::loss::KullbackLeiblerDivergence();
		return obj;
	}

	BaseLoss* Loss::LogCosh()
	{
		BaseLoss* obj = new nn::loss::LogCosh();
		return obj;
	}

	BaseLoss* Loss::MeanAbsoluteError()
	{
		BaseLoss* obj = new nn::loss::MeanAbsoluteError();
		return obj;
	}

	BaseLoss* Loss::MeanAbsolutePercentageError()
	{
		BaseLoss* obj = new nn::loss::MeanAbsolutePercentageError();
		return obj;
	}

	BaseLoss* Loss::MeanSquaredError()
	{
		BaseLoss* obj = new nn::loss::MeanSquaredError();
		return obj;
	}

	BaseLoss* Loss::MeanSquaredLogError()
	{
		BaseLoss* obj = new nn::loss::MeanSquaredLogError();
		return obj;
	}

	BaseLoss* Loss::Poisson()
	{
		BaseLoss* obj = new nn::loss::Poisson();
		return obj;
	}

	BaseLoss* Loss::SquaredHinge()
	{
		BaseLoss* obj = new nn::loss::SquaredHinge();
		return obj;
	}
}
