#pragma once

#ifdef APRILTAGSUWPDLL_EXPORTS
#define APRILTAGSUWPDLL_API __declspec(dllexport)
#else
#define APRILTAGSUWPDLL_API __declspec(dllimport)
#endif

extern "C" {
	APRILTAGSUWPDLL_API void TestAprilTagMethods();
}
