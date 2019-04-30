#include "BaseInitializer.h"

namespace nn
{
	namespace initializers {
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
}
