#include "CosineProximity.h"


namespace nn
{
	namespace loss {
		CosineProximity::CosineProximity() : BaseLoss("cosine_proximity")
		{
		}


		CosineProximity::~CosineProximity()
		{
		}

		array CosineProximity::Forward(const array preds, const array labels)
		{
			return -1 * cossine_sim(labels, preds);
		}

		array CosineProximity::Backward(const array preds, const array labels)
		{

			auto y_true = max((sum(labels, 1), 1) / abs(preds * abs(labels)), 1);
			auto y_pred = max((sum(preds, 1), 1) / pow2(abs(preds)), 1);
			return y_true + cossine_sim(preds, labels) * y_pred;
		}

		array CosineProximity::cossine_sim(const array preds, const array labels)
		{
			auto y_true = l2_normalize(labels, 1);
			auto y_pred = l2_normalize(preds, 1);
			return sum(y_true * y_pred, 1);
		}
	}
}
