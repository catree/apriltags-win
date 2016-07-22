#include "pch.h"
#include <iostream>
#include "AprilTagsCppUniversalDll.h"

#include "apriltag.h"
#include "tag36h11.h"

extern "C" {
	void TestAprilTagMethods()
	{
		// ...
		std::cout << "TestAprilTagMethods() called." << std::endl;
		// ...

		apriltag_family_t *tf = tag36h11_create();
		// apriltag_detector_t *td = apriltag_detector_create(tf);
		apriltag_detector_t *td = apriltag_detector_create();


	}
}

