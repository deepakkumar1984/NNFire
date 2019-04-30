#include "Parameter.h"

namespace nn {

	Parameter::Parameter(std::string name)
	{
		Name = name;
		pConstraint = NULL;
		pRegularizer = NULL;
	}


	Parameter::~Parameter()
	{
	}

	Parameter Parameter::Create(array data, std::string name)
	{
		Parameter p = Parameter::Parameter(name);
		p.Data = data;

		return p;
	}

	bool Parameter::HaveRegularizer()
	{
		if (pRegularizer != NULL)
			return true;

		return false;
	}

	void Parameter::SetConstraint(BaseConstraint* c)
	{
		pConstraint = c;
	}

	void Parameter::SetRegularizer(BaseRegularizer* r)
	{
		pRegularizer = r;
	}

	void Parameter::ApplyConstraint()
	{
		if (pConstraint != NULL)
		{
			Data = pConstraint->Call(Data);
		}
	}

	float Parameter::AppRegularizer()
	{
		float r = 0;
		if (pRegularizer != NULL)
		{
			r = pRegularizer->Calculate(Data);
		}

		return r;
	}

	void Parameter::ApplyDeltaRegularizer()
	{
		if (pRegularizer != NULL)
		{
			Grad += pRegularizer->Gradient(Data);
		}
	}
}