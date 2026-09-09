#pragma once

#if defined(RHI_EXPORTS)
	#define RHI_API __declspec(dllexport)
#else
	#define RHI_API __declspec(dllimport)
#endif
