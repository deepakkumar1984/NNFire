#include <arrayfire.h>
#include "NNDevice.h"
#include "initializers.h"
#include "constraints.h"
#include <Variable.h>
#include "Functions.h"
#include <iostream>
using namespace nn::initializer;
using namespace nn;

int main()
{
	NNDevice::UseDefault();
	/*auto arr = af::randu(5, 4);
	arr = arr / 5;
	af_print(arr);
	
	BaseConstraint* con = Constraints::MaxNorm();
	array result = con->Call(arr);
	af_print(result);*/

	auto x = Variable(af::constant(5.0, 5), true);
	auto y = x * x;
	y.zeroGrad();
	af_print(y.array());
	auto dy = Variable(af::constant(1.0, 5), false);
	y.backward(dy);
	af_print(dy.array());
	auto dx = x.grad();
	af_print(dx.array());
	int a;
	std::cin >> a;
	return 0;
}

void TestNN()
{

}