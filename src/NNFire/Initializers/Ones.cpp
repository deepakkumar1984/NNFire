#include "Ones.h"

namespace nn
{
	namespace initializers {
		Ones::Ones() : Constant(1)
		{
			Name = "ones";
		}


		Ones::~Ones()
		{
		}
	}
}
