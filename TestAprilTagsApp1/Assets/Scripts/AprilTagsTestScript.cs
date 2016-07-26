using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;


public class AprilTagsTestScript : MonoBehaviour {

    [DllImport("AprilTagsCppUniversalDll", EntryPoint = "TestAprilTagMethods")]
    public static extern void TestAprilTagMethods();

    // Use this for initialization
    void Start () {

        // Testing...
        TestAprilTagMethods();

    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
