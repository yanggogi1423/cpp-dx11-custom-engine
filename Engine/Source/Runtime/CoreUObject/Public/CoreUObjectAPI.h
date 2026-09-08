#pragma once

#if defined(COREUOBJECT_EXPORTS)
	#define COREUOBJECT_API __declspec(dllexport)
#else
	#define COREUOBJECT_API __declspec(dllimport)
#endif