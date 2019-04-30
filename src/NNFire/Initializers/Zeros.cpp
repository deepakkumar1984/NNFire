#include "Zeros.h"


namespace nn
{
	namespace initializers {
		Zeros::Zeros() : Constant(0)
		{
			Name = "zeros";
		}


		Zeros::~Zeros()
		{
		}
	}
}
