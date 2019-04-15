#pragma once
#include "../CommonIncludes.h"

using namespace af;

class Constraints
{
public:
	Constraints();
	~Constraints();

	static array MaxNorm(const array &x, const float maxValue = 2, const int axis = 0);
	array MinMaxNorm(const array &x, const float minVale = 0, const float maxValue = 1, const float rate = 1, const int axis = 0);
	array NonNeg(const array &x);
	array UnitNorm(const array &x, const int axis = 0);
};


