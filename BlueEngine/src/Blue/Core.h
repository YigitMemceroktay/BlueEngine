#pragma once

#ifdef BL_PLATFORM_WINDOWS
	#ifdef BL_BUILD_DLL
		#define BLUE_API __declspec(dllexport)
	#else
		#define BLUE_API __declspec(dllimport)
	#endif
#else 
	#error Blue only support Windows!
#endif

#define BIT(X)(1<<X)