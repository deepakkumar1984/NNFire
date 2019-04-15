#include "BaseInitializer.h"

namespace nn
{
	BaseInitializer::BaseInitializer(std::string name)
	{
		Name = name;
	}

	BaseInitializer::~BaseInitializer()
	{
	}

	array BaseInitializer::Generate(int shape[])
	{
		return array();
	}
}
