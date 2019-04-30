#pragma once
#include "Constant.h"

namespace nn
{
	namespace initializers {
		class Zeros :
			public Constant
		{
		public:
			Zeros();
			~Zeros();

		};
	}
}

