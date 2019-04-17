#include <arrayfire.h>
#include "NNDevice.h"
#include "Initializers.h"
using namespace nn;
int main()
{
	NNDevice::UseCPU();
	auto arr = af::randu(5, 4);
	arr = arr / 5;
	af_print(arr);
	auto init = Initializers::GlorotUniform();
	auto result = init->Generate(new int[2] {2, 6});
	
	af_print(result);
	return 0;
}

void TestNN()
{

}