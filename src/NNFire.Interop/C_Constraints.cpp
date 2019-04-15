#include "C_Constraints.h"

af_array Constraint_MaxNorm(const af_array &x, const float maxValue, const int axis)
{
	array arr = array::array(x);
	return Constraints::MaxNorm(arr, maxValue, axis).get();
}
