#include "CorePrivatePCH.h"

#include "HAL/PlatformTime.h"

//	Dependent on OS
#if defined(_WIN32)

namespace
{
	inline LARGE_INTEGER GetQpcFrequency()
	{
		static LARGE_INTEGER Frequency = []()
		{
			LARGE_INTEGER Freq{};
			QueryPerformanceFrequency(&Freq);
			return Freq;
		}();
		return Frequency;
	}
}

double FPlatformTime::Seconds()
{
	LARGE_INTEGER Counter{};
	::QueryPerformanceCounter(&Counter);

	const LARGE_INTEGER Frequency = GetQpcFrequency();
	return static_cast<double>(Counter.QuadPart) / static_cast<double>(Frequency.QuadPart);
}

uint64 FPlatformTime::Cycles64()
{
	LARGE_INTEGER Counter{};
	::QueryPerformanceCounter(&Counter);
	return static_cast<uint64>(Counter.QuadPart);
}

void FPlatformTime::Sleep(float Seconds)
{
	if (Seconds <= 0.0f)
	{
		return;
	}
	const DWORD Milliseconds = static_cast<DWORD>(Seconds * 1000.0f);
	::Sleep(Milliseconds);
}

#else

double FPlatformTime::Seconds()
{
	using Clock = std::chrono::high_resolution_clock;
	const auto Now = Clock::now();
	const auto Duration = Now.time_since_epoch();
	return std::chrono::duration<double>(Duration).count();
}

uint64 FPlatformTime::Cycles64()
{
	using Clock = std::chrono::high_resolution_clock;
	const auto Now = Clock::now();
	const auto Duration = Now.time_since_epoch();
	return static_cast<uint64>(std::chrono::duration_cast<std::chrono::nanoseconds>(Duration).count());
}

void FPlatformTime::Sleep(float Seconds)
{
	if (Seconds <= 0.0f)
	{
		return;
	}
	const auto Duration = std::chrono::duration<float>(Seconds);
	std::this_thread::sleep_for(Duration);
}

#endif