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

}