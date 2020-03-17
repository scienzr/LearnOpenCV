#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

int main (int argc, char** argv) {

	namedWindow("Example3", WINDOW_AUTOSIZE);
	VideoCapture cap;
	cap.open( std::string(argv[1]) );
	cv::Mat frame;
	for(;;) {
		cap >> frame;
		if (frame.empty()) break;
		imshow("Example3", frame);
		if (waitKey(1) >= 0 ) break;
	}
	return 0;
}