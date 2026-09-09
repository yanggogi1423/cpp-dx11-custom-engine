#pragma once

#if defined(ENGINE_EXPORTS)
	#define ENGINE_API __declspec(dllexport)
#else
	#define ENGINE_API __declspec(dllimport)
#endif
