#include <opencv2/opencv.hpp>
#include <vector>
#include <iostream>

typedef std::vector<cv::Point3f> VecPoint3f;
typedef std::vector<cv::Point2f> VecPoint2f;

cv::Mat gcvInitCameraMatrix2D(VecPoint3f objPts, VecPoint2f imgPts);