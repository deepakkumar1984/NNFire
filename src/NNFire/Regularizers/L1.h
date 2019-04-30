#pragma once
#include "L1L2.h"

namespace nn {
	namespace regularizer {
		class L1 :
			public L1L2
		{
		public:
			L1(float l = 0.01);
			~L1();
		};
	}
}
