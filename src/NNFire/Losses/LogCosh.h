#pragma once
#include "BaseLoss.h"

namespace nn
{
	namespace loss {
		class LogCosh :
			public BaseLoss
		{
		public:
			LogCosh();
			~LogCosh();

			array Forward(const array preds, const array labels);
			array Backward(const array preds, const array labels);

		private:
			array _logcosh(array x);
		};
	}
}

