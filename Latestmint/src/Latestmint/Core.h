#pragma once

#ifdef LM_PLATFORM_WINDOWS
	#ifdef LM_BUILD_DLL
		#define LATESTMINT_API __declspec(dllexport)
	#else
		#define LATESTMINT_API __declspec(dllimport)
	#endif
#else
	#error Latestmint only supports Windows!
#endif