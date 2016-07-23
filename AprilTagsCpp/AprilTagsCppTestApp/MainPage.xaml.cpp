//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

// ???
// This is very strange, including "Class1.h" here will throw "type redefinition" error
// #include "Class1.h"

#include "AprilTagsCppUniversalDll.h"


using namespace AprilTagsCppTestApp;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();


	// Testing...
	TestAprilTagMethods();


	// Testing...
	AprilTagsCppRuntimeComponent::Class1^ cl1 = ref new AprilTagsCppRuntimeComponent::Class1();
	cl1->TestAprilTag1();


}
