#pragma once
#include "CommonIncludes.h"
#include "constraints.h"
#include "Regularizers.h"

namespace nn {
	class Parameter
	{
	public:
		std::string Name;
		array Data;
		array Grad;
		
		Parameter(std::string name);
		~Parameter();

		static Parameter Create(array data, std::string name = "");
		bool HaveRegularizer();
		void SetConstraint(BaseConstraint* c);
		void SetRegularizer(BaseRegularizer* r);
		void ApplyConstraint();
		float AppRegularizer();
		void ApplyDeltaRegularizer();

	private:
		constraint::BaseConstraint *pConstraint;
		regularizer::BaseRegularizer* pRegularizer;
	};
}

