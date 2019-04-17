#include "NNDevice.h"
#include "Global.h"
#include <iostream>

namespace nn
{
	NNDevice::NNDevice()
	{
	}


	NNDevice::~NNDevice()
	{
	}

	void nn::NNDevice::UseDefault()
	{
		try
		{
			std::cout << "Using Default Device\n";
			af::setBackend(AF_BACKEND_DEFAULT);
			af::info();
		}
		catch (const std::exception& e)
		{
			std::cout << "Failed to use Default. \n" << e.what() << "\n";
		}
	}

	void nn::NNDevice::UseCPU()
	{
		try
		{
			std::cout << "Using CPU Device\n";
			af::setBackend(AF_BACKEND_CPU);
			af::info();
		}
		catch (const std::exception& e)
		{
			std::cout << "Failed to use CPU. Setting to default device \n" << e.what() << "\n\n";
			UseDefault();
		}
	}

	void nn::NNDevice::UseCUDA(int deviceId)
	{
		try
		{
			std::cout << "Using CUDA Backend\n";
			af::setBackend(AF_BACKEND_CUDA);
			af::setDevice(deviceId);
			af::info();
		}
		catch (const std::exception& e)
		{
			std::cout << "Failed to use CUDA. Setting to default device \n" << e.what() << "\n\n";
			UseDefault();
		}
	}

	void nn::NNDevice::UseOpenCL(int deviceId)
	{
		try
		{
			std::cout << "Using OpenCL Backend\n";
			af::setBackend(AF_BACKEND_OPENCL);
			af::setDevice(deviceId);
			af::info();
		}
		catch (const std::exception& e)
		{
			std::cout << "Failed to use OpenCL. Setting to default device: \n" << e.what() << "\n\n";
			UseDefault();
		}
		
	}
}