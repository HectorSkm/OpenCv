
#include <iostream>
#include <opencv2/core/ocl.hpp>
#include "FaceDetector.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    /*
    if (argc <= 1)
    {
        cerr << "ERROR: MIssing argument - path to image" << endl;
        return 1;
    }
    */
    cv::ocl::setUseOpenCL(false);
    FaceDetector fd;
    fd.loadCascade();
    /*
    if (int ret = fd.loadImage(argv[1]))
    {
        return ret;
    }
    */
    fd.loadImage("chiquita.jpg");
    //cout << endl << "Loaded " << argv[1] << endl;
    int faceCount = fd.detectFaces();
    cout << endl << "Detected " << faceCount << " faces" << endl;

    cout << endl;
    //fd.saveJSON();

    cout << endl;
    fd.displayImage();

    return 0;
}
