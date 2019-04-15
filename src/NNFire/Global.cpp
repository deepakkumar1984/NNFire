#include "Global.h"

namespace nn
{
	Global::Global()
	{
	}


	Global::~Global()
	{
	}

	int Global::size_of(int x[])
	{
		return sizeof(x) / sizeof(*x);
	}

	af::dim4 Global::get_dims(int shape[])
	{
		int size = size_of(shape);
		af::dim4 dims = NULL;
		
		if (size == 1)
		{
			dims = af::dim4::dim4(shape[0]);
		}
		else if (size == 2)
		{
			dims = af::dim4::dim4(shape[0], shape[1]);
		}
		else if (size == 3)
		{
			dims = af::dim4::dim4(shape[0], shape[1], shape[2]);
		}
		else if (size == 4)
		{
			dims = af::dim4::dim4(shape[0], shape[1], shape[2], shape[3]);
		}

		return dims;
	}

	af::array Global::afmax(const af::array x, const int axis)
	{
		af_array result = NULL;
		af_max(&result, x.get(), axis);
		return af::array::array(result);
	}

	af::array Global::afmaximum(const af::array lhs, const af::array rhs)
	{
		af_array result = NULL;

		af_maxof(&result, lhs.get(), rhs.get(), false);
		return af::array::array(result);
	}

	af::array Global::afmaximum(const af::array lhs, const float rhs)
	{
		af_array result = NULL;

		af_maxof(&result, lhs.get(), af::constant<float>(rhs, lhs.dims()).get(), false);
		return af::array::array(result);
	}

	af::array Global::softmax(const af::array x, const int axis)
	{
		auto e = exp(x - afmax(x, axis));
		auto s = sum(e, axis);
		return e / s;
	}

	af::array Global::l2_normalize(const af::array x, const int axis)
	{
		af::array y = afmax(af::sum(af::pow2(x), axis), axis);
		return x / af::sqrt(y);
	}

}