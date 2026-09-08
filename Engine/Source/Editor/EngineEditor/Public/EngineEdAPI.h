#pragma once

#if defined(ENGINEEDITOR_EXPORTS)
	#define ENGINEEDITOR_API __declspec(dllexport)
#else
	#define ENGINEEDITOR_API __declspec(dllimport)
#endif