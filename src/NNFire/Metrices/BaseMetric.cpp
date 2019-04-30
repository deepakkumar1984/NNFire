#include "BaseMetric.h"

namespace nn
{
	namespace metrices {
		BaseMetric::BaseMetric(std::string name)
		{
			Name = name;
		}


		BaseMetric::~BaseMetric()
		{
		}

		array BaseMetric::Calculate(const array preds, const array labels)
		{
			return array();
		}

		BaseMetric* BaseMetric::Get(MetricType metricType)
		{
			BaseMetric* metric = nullptr;
			switch (metricType)
			{
			case MetricType::Accuracy:
				break;
			case MetricType::BinaryAccurary:
				break;
			case MetricType::MSE:
				break;
			case MetricType::MAE:
				break;
			case MetricType::MAPE:
				break;
			case MetricType::MSLE:
				break;
			default:
				break;
			}

			return metric;
		}
	}

}
