
#ifndef FACEDETECTOR_H_
#define FACEDETECTOR_H_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

#include <opencv2/opencv.hpp>


#define HAAR_CASCADE_PATH "C:\\opencv\\sources\\data\\haarcascades\\haarcascade_profileface.xml"


class FaceDetector
{
public:
    int loadCascade();
    int loadImage(std::string imagePath);
    int detectFaces();
    void displayImage();
   // void saveJSON();

private:
    std::string imagePath_;
    cv::Mat image_;
    cv::CascadeClassifier faceHaarCascade_;
    std::vector<cv::Rect> faces_;

    void shrinkImage(int maxWidth, int maxHeight);
};

#endif // FACEDETECTOR_H_

