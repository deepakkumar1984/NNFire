#pragma once
#define NOMINMAX

#include <arrayfire.h>

namespace nn
{
	class Global
	{
	public:
		Global();
		~Global();

		//Global Variables
		float Epsilon = 1e-7f;

		//Common Functions
		int size_of(int x[]);
		af::dim4 get_dims(int shape[]);
		/*af::array afmax(const af::array x, const int axis);*/
		af::array maximum(const af::array lhs, const af::array rhs);
		af::array maximum(const af::array lhs, const float rhs);
		af::array softmax(const af::array x, const int axis = 1);
		af::array softplus(const af::array x);
		af::array l2_normalize(const af::array x, const int axis = 1);
		af::array reshape(const af::array x, int targetShape[]);
		af::array ravel(const af::array x);
		af::array argmax(const af::array x);
		af::array argmin(const af::array x);
	};

	enum LossType
	{
		MeanSquaredError = 0,
		MeanAbsoluteError,
		MeanAbsolutePercentageError,
		MeanAbsoluteLogError,
		SquaredHinge,
		Hinge,
		BinaryCrossEntropy,
		CategorialCrossEntropy,
		KullbackLeiblerDivergence,
		Logcosh,
		Poisson,
		CosineProximity,
		CTC
	};

	enum MetricType
	{
		Accuracy = 0,
		BinaryAccurary,
		MSE,
		MAE,
		MAPE,
		MSLE
	};
}

