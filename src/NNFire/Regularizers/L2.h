#pragma once
#include "L1L2.h"

namespace nn {
	namespace regularizer {
		class L2 :
			public L1L2
		{
		public:
			L2(float l = 0.01);
			~L2();
		};
	}
}
