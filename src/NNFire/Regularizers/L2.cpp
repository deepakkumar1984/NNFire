#include "L2.h"

namespace nn {
	namespace regularizer {
		L2::L2(float l) : L1L2(l, 0)
		{
			Name = "L2";
		}

		L2::~L2()
		{
		}
	}
}
