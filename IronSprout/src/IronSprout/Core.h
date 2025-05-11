#pragma once

#ifdef IS_PLATFROM_WINDOWS
	#ifdef IS_BUILD_DLL
		#define IRONSPROUT_API __declspec(dllexport)
	#else
		#define IRONSPROUT_API __declspec(dllimport)
	#endif // IS_BUILD_DLL
#else
	#error IronSprout only support Windows!
#endif // IS_PLATFROM_WINDOWS

