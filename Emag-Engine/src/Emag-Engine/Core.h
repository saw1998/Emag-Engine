#pragma once

#ifdef EG_PLATFORM_WINDOWS
	
	#ifdef EG_BUILD_DLL
		#define EG_API __declspec(dllexport)
	#else
		#define EG_API __declspec(dllimport)
	#endif
#else
	#error Emag-Engine only supports Windows!
#endif