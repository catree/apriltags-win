// #pragma comment(lib, "apriltag_UAP_x86_Debug.lib")

#include "pch.h"
#include <iostream>
#include "AprilTagsCppUniversalDll.h"

#include "apriltag.h"
// #include "tag36h11.h"

extern "C" {

	//typedef struct apriltag_detector apriltag_detector_t;
	//struct apriltag_detector
	//{
	//	///////////////////////////////////////////////////////////////
	//	// User-configurable parameters.

	//	// How many threads should be used?
	//	int nthreads;

	//	// detection of quads can be done on a lower-resolution image,
	//	// improving speed at a cost of pose accuracy and a slight
	//	// decrease in detection rate. Decoding the binary payload is
	//	// still done at full resolution. .
	//	float quad_decimate;

	//	// What Gaussian blur should be applied to the segmented image
	//	// (used for quad detection?)  Parameter is the standard deviation
	//	// in pixels.  Very noisy images benefit from non-zero values
	//	// (e.g. 0.8).
	//	float quad_sigma;

	//	// When non-zero, the edges of the each quad are adjusted to "snap
	//	// to" strong gradients nearby. This is useful when decimation is
	//	// employed, as it can increase the quality of the initial quad
	//	// estimate substantially. Generally recommended to be on (1).
	//	//
	//	// Very computationally inexpensive. Option is ignored if
	//	// quad_decimate = 1.
	//	int refine_edges;

	//	// when non-zero, detections are refined in a way intended to
	//	// increase the number of detected tags. Especially effective for
	//	// very small tags near the resolution threshold (e.g. 10px on a
	//	// side).
	//	int refine_decode;

	//	// when non-zero, detections are refined in a way intended to
	//	// increase the accuracy of the extracted pose. This is done by
	//	// maximizing the contrast around the black and white border of
	//	// the tag. This generally increases the number of successfully
	//	// detected tags, though not as effectively (or quickly) as
	//	// refine_decode.
	//	//
	//	// This option must be enabled in order for "goodness" to be
	//	// computed.
	//	int refine_pose;

	//	// When non-zero, write a variety of debugging images to the
	//	// current working directory at various stages through the
	//	// detection process. (Somewhat slow).
	//	int debug;

	//	//struct apriltag_quad_thresh_params qtp;

	//	/////////////////////////////////////////////////////////////////
	//	//// Statistics relating to last processed frame
	//	//timeprofile_t *tp;

	//	//uint32_t nedges;
	//	//uint32_t nsegments;
	//	//uint32_t nquads;

	//	/////////////////////////////////////////////////////////////////
	//	//// Internal variables below

	//	//// Not freed on apriltag_destroy; a tag family can be shared
	//	//// between multiple users. The user should ultimately destroy the
	//	//// tag family passed into the constructor.
	//	//zarray_t *tag_families;

	//	//// Used to manage multi-threading.
	//	//workerpool_t *wp;

	//	//// Used for thread safety.
	//	//pthread_mutex_t mutex;
	//};

	//extern apriltag_detector_t *apriltag_detector_create();

	void TestAprilTagMethods()
	{
		// ...
		std::cout << "TestAprilTagMethods() called." << std::endl;
		// ...

		// apriltag_family_t *tf = tag36h11_create();

		// apriltag_detector_t *td = apriltag_detector_create(tf);
		apriltag_detector_t *td = apriltag_detector_create();


	}
}

