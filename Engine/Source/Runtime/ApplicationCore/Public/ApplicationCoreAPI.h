#pragma once

#if defined(APPLICATIONCORE_EXPORTS)
	#define APPLICATIONCORE_API __declspec(dllexport)
#else
	#define APPLICATIONCORE_API __declspec(dllimport)
#endif