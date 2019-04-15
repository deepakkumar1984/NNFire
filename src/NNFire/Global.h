#pragma once
#include <arrayfire.h>

namespace nn
{
	class Global
	{
	public:
		Global();
		~Global();

		float Epsilon = 1e-7f;

		int size_of(int x[]);

		af::dim4 get_dims(int shape[]);
	};
}

