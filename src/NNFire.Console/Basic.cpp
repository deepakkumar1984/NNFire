#include <arrayfire.h>
#include "NNDevice.h"
#include "initializers.h"
#include "constraints.h"

using namespace nn::initializer;
using namespace nn;

int main()
{
	NNDevice::UseDefault();
	auto arr = af::randu(5, 4);
	arr = arr / 5;
	af_print(arr);
	
	BaseConstraint* con = Constraints::MaxNorm();
	array result = con->Call(arr);
	af_print(result);
	return 0;
}

void TestNN()
{

}