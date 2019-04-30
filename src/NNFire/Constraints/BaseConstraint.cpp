#include "BaseConstraint.h"

namespace nn
{
	namespace constraint {
		BaseConstraint::BaseConstraint()
		{
		}


		BaseConstraint::~BaseConstraint()
		{
		}

		array BaseConstraint::Call(const array x)
		{
			return array();
		}
	}
}

