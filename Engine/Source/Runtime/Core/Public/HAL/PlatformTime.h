#pragma once

#include "Core/CoreAPI.h"

#include "HAL/PlatformTypes.h"

#if defined(_WIN32)
	#include <Windows.h>
#else
	#include <chrono>
	#include <thread>
#endif

struct CORE_API FPlatformTime
{
	static double Seconds();
	static uint64 Cycles64();
	static void Sleep(float Seconds);
};