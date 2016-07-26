#include "pch.h"
#include <iostream>

#include "Class1.h"

#include "apriltag.h"
#include "tag36h11.h"

// testing
#include <windows.h>


using namespace AprilTagsCppRuntimeComponent;
using namespace Platform;


Class1::Class1()
{
}

void Class1::TestAprilTag1()
{
	
	// ...
	std::cout << "TestAprilTag1() called." << std::endl;
	// ...

	apriltag_family_t *tf = tag36h11_create();

	// apriltag_detector_t *td = apriltag_detector_create(tf);
	apriltag_detector_t *td = apriltag_detector_create();


	// testing ...
	OutputDebugString(L"Testing Class1::TestAprilTag1()....\n");
	// testing ..


}

