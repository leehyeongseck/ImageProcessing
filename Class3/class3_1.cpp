#include <iostream>
#include <vector>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

/*
void Error(Mat img) {
	if (img.empty()) {
		cout << "not found image" << endl;
	}
}
int main(int argc, char* argv[]) {
	Mat r = Mat(400, 600, CV_8UC3);
	randu(r, Scalar::all(0), Scalar::all(255)); // 난수로 Mat 객체 생성
	imshow("img", r);
	cout << "R= " << endl << r << endl << endl;
	waitKey(0);
	return 0;
}
*/