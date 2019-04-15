#include <arrayfire.h>
#include "Initializers/BaseInitializer.h"
#include "Initializers/GlorotUniform.h"
using namespace nn;
int main()
{
	printf("Trying CPU Backend\n");
	af::setBackend(AF_BACKEND_CPU);
	af::info();
	auto arr = af::randu(5, 4);
	arr = arr / 5;
	af_print(arr);
	BaseInitializer *c = new GlorotUniform();
	auto result = c->Generate(new int[2] {2, 6});
	
	af_print(result);
	return 0;
}