#pragma once
#include <af\gfor.h>
#include <af\array.h>
#include <arrayfire.h>
#include "Variable.h"

using namespace af;
namespace nn {
	Variable operator +(const Variable& lhs, const Variable& rhs);
	Variable operator *(const Variable& lhs, const Variable& rhs);
	Variable operator -(const Variable& lhs, const Variable& rhs);
	Variable operator /(const Variable& lhs, const Variable& rhs);
	Variable operator >(const Variable& lhs, const Variable& rhs);
	Variable operator <(const Variable& lhs, const Variable& rhs);
	Variable operator >=(const Variable& lhs, const Variable& rhs);
	Variable operator <=(const Variable& lhs, const Variable& rhs);

	Variable operator +(const double& lhs, const Variable& rhs);
	Variable operator *(const double& lhs, const Variable& rhs);
	Variable operator -(const double& lhs, const Variable& rhs);
	Variable operator /(const double& lhs, const Variable& rhs);
	Variable operator >(const double& lhs, const Variable& rhs);
	Variable operator <(const double& lhs, const Variable& rhs);
	Variable operator >=(const double& lhs, const Variable& rhs);
	Variable operator <=(const double& lhs, const Variable& rhs);

	Variable operator +(const Variable& lhs, const double& rhs);
	Variable operator *(const Variable& lhs, const double& rhs);
	Variable operator -(const Variable& lhs, const double& rhs);
	Variable operator /(const Variable& lhs, const double& rhs);
	Variable operator >(const Variable& lhs, const double& rhs);
	Variable operator <(const Variable& lhs, const double& rhs);
	Variable operator >=(const Variable& lhs, const double& rhs);
	Variable operator <=(const Variable& lhs, const double& rhs);
	Variable operator !(const Variable& input);

	Variable negate(const Variable& input);
	Variable reciprocal(const Variable& input);

	Variable exp(const Variable& input);
	Variable log(const Variable& input);
	Variable sin(const Variable& input);
	Variable cos(const Variable& input);
	Variable tanh(const Variable& input);
	Variable sigmoid(const Variable& input);

	Variable Max(const Variable &lhs, const Variable &rhs);

	Variable Max(const Variable &lhs, const double &rhs);
	Variable Max(const double &lhs, const Variable &rhs);

	Variable Min(const Variable& lhs, const Variable& rhs);

	Variable Min(const Variable& lhs, const double& rhs);
	Variable Min(const double& lhs, const Variable& rhs);

	Variable transpose(const Variable& input);
	Variable tileAs(const Variable& input, const Variable& reference);
	Variable sumAs(const Variable& input, const Variable& reference);

	Variable tile(const Variable& input, const std::vector<int>& repeats);
	Variable sum(const Variable& input, const std::vector<int>& axes);
	Variable mean(const Variable& input, const std::vector<int>& axes);

	Variable matmul(const Variable& lhs, const Variable& rhs);
	Variable matmulTN(const Variable& lhs, const Variable& rhs);
	Variable matmulNT(const Variable& lhs, const Variable& rhs);

	Variable abs(const Variable& input);

	Variable flat(const Variable& input);
	Variable moddims(const Variable& input, const dim4& dims);
}
