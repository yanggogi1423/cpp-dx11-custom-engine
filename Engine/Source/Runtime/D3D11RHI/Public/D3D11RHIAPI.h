#pragma once

#if defined(D3D11RHI_EXPORTS)
	#define D3D11RHI_API __declspec(dllexport)
#else
	#define D3D11RHI_API __declspec(dllimport)
#endif