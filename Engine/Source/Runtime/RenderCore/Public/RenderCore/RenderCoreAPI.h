#pragma once

#if defined(RENDERCORE_EXPORTS)
	#define RENDERCORE_API __declspec(dllexport)
#else
	#define RENDERCORE_API __declspec(dllimport)
#endif
