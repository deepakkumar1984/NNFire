#include "Ones.h"

namespace nn
{
	namespace initializer {
		Ones::Ones() : Constant(1)
		{
			Name = "ones";
		}


		Ones::~Ones()
		{
		}
	}
}
