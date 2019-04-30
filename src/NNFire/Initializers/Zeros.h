#pragma once
#include "Constant.h"

namespace nn
{
	namespace initializer {
		class Zeros :
			public Constant
		{
		public:
			Zeros();
			~Zeros();

		};
	}
}

