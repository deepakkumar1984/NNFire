#include <arrayfire.h>
#include "NNDevice.h"
#include "initializers.h"
#include "constraints.h"

using namespace nn::initializers;
using namespace nn;

int main()
{
	NNDevice::UseDefault();
	auto arr = af::randu(5, 4);
	arr = arr / 5;
	af_print(arr);
	
	BaseInitializer *c = new GlorotUniform();
	auto result = c->Generate(new int[2] {2, 6});
	
	af_print(result);
	return 0;
}

void TestNN()
{

}