#pragma once

#ifdef AE_PLATFORM_WINDOWS
	#ifdef AE_BUILD_DLL
		#define AEON_API __declspec(dllexport)
	#else
		#define AEON_API __declspec(dllimport)
	#endif
#else
	#error Aeon only supports Windows!
#endif