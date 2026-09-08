#pragma once

#if defined(LAUNCH_EXPORTS)
	#define LAUNCH_API __declspec(dllexport)
#else
	#define LAUNCH_API __declspec(dllimport)
#endif