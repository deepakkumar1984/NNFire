#include "arrayfire.h"

extern "C" __declspec(dllexport) af_array Constraint_MaxNorm(const af_array &x, const float maxValue, const int axis);
