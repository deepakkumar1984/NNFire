#pragma once
#include "Global.h"
#include "CommonIncludes.h"

namespace nn
{
	class BaseMetric :
		public Global
	{
	public:
		std::string Name;

		BaseMetric(std::string name);
		~BaseMetric();

		array Calculate(const array preds, const array labels);
		static BaseMetric* Get(MetricType metricType);
	};
}

