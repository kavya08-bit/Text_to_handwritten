#include <opencv2/opencv.hpp>
#include <iostream>

int main() {

    int width = 800, height = 200;
    cv::Mat image(height, width, CV_8UC3, cv::Scalar(255, 255, 255));


    std::string text = "convert this into handwritten style.";


    int fontFace = cv::FONT_HERSHEY_SCRIPT_SIMPLEX; 
    double fontScale = 1.5;
    int thickness = 2;


    cv::Point textOrg(50, 100);
    cv::putText(image, text, textOrg, fontFace, fontScale, cv::Scalar(0, 0, 0), thickness);

    cv::imshow("Handwritten Style", image);
    cv::waitKey(0);


    cv::imwrite("handwritten_output.png", image);

    return 0;
}
