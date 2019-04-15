#pragma once
#include "../CommonIncludes.h"

using namespace af;

namespace nn {
	class BaseConstraint :
		public Global
	{
	public:
		BaseConstraint();
		virtual ~BaseConstraint();

		virtual array Call(const array x) = 0;
	};
}

