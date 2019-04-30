#include "Zeros.h"


namespace nn
{
	namespace initializer {
		Zeros::Zeros() : Constant(0)
		{
			Name = "zeros";
		}


		Zeros::~Zeros()
		{
		}
	}
}
