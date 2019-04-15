#pragma once
#include "../CommonIncludes.h"

namespace nn
{
	class BaseInitializer :
		public Global
	{
	public:
		std::string Name;
		BaseInitializer(std::string name);
		~BaseInitializer();

		virtual array Generate(int shape[]);
	};
}

