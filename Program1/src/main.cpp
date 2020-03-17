// #include <iostream>
// #include <opencv2/opencv.hpp>

// int main(int argc, char** argv) {
// 	cv::Mat img = cv::imread(argv[1], -1);
// 	if (img.empty()) {
// 		return -1;
// 	}
// 	cv::namedWindow ("Example1", cv::WINDOW_AUTOSIZE);
// 	cv::imshow("Example1", img);
// 	cv::waitKey(0);
// 	cv::destroyWindow("Example1");
// 	return 0;
// }

#include "opencv2/highgui/highgui.hpp"

using namespace cv;

int main (int argc, char** argv) {
	
	Mat img = imread(argv[1], -1);
	if ( img.empty() ) return -1;
	namedWindow("Example1", WINDOW_AUTOSIZE);
	imshow("Example1", img);
	waitKey(0);

	destroyWindow("Example1");

}