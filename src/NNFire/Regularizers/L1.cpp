#include "L1.h"

namespace nn {
	namespace regularizer {
		L1::L1(float l) : L1L2(l, 0)
		{
			Name = "L1";
		}

		L1::~L1()
		{
		}
	}
}
