#pragma once
#include "Constant.h"
namespace nn {
	namespace initializers {
		class Ones :
			public Constant
		{
		public:
			Ones();
			~Ones();
		};
	}
}

