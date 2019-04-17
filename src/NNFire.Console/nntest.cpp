#include <arrayfire.h>
#include <stdio.h>
#include <vector>
#include <string>
#include <af/util.h>
#include <math.h>

using namespace af;
using std::vector;
float accuracy(const array& predicted, const array& target)
{
	array val, plabels, tlabels;
	max(val, tlabels, target, 1);
	max(val, plabels, predicted, 1);
	return 100 * count<float>(plabels == tlabels) / tlabels.elements();
}

int main(int argc, char** argv)
{
	return 0;
}