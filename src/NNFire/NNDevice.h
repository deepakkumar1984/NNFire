#pragma once

namespace nn
{
	class NNDevice
	{
	public:
		NNDevice();
		~NNDevice();

		static void UseDefault();
		static void UseCPU();
		static void UseCUDA(int deviceId = 0);
		static void UseOpenCL(int deviceId = 0);

	};
}

