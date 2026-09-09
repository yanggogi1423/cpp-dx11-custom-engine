#pragma once

#if defined(RENDERER_EXPORTS)
	#define RENDERER_API __declspec(dllexport)
#else
	#define RENDERER_API __declspec(dllimport)
#endif
