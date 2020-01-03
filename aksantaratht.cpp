#include <iostream>
#include <stdbool.h>
#include <opencv2/opencv.hpp>


cv::VideoCapture inputVideo;
inputVideo.open(0);
cv::Ptr<cv::aruco::Dictionary> dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_50);
bool angkut=false
while (inputVideo.grab()) {
    cv::Mat image, imageCopy;
    inputVideo.retrieve(image);
    image.copyTo(imageCopy);
    std::vector<int> ids;
    std::vector<std::vector<cv::Point2f> > corners;
    cv::aruco::detectMarkers(image, dictionary, corners, ids);

    if (ids.size() > 0) {
        //IF (angkut==True) {
        //  IF (marker >= 4cm) {
        //      MISI SELESAI
        //}

        //IF (marker > 5 cm) {
        //  drone turun
        //}
        //IF (marker <= 5 cm) {
        //  magnet aktif 5s
        //  drone naik 10cm
        //  angkut=True
        //}
    }
}