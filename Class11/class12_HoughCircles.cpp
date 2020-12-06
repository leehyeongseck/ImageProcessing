/*#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat src, src_gray;
	src = imread("D:/3-2학기/영상처리-안세종/images/coins.jpg", 1);
	imshow("src", src);
	// 그레이스케일로 변환 
	cvtColor(src, src_gray, CV_BGR2GRAY);

	// 가우시안 블러링 적용 
	GaussianBlur(src_gray, src_gray, Size(9, 9), 2, 2);
	
	// a, b, r을 담기위한 벡터 
	vector<Vec3f> circles;

	// 원을 검출하는 허프 변환 
	HoughCircles(src_gray, circles, CV_HOUGH_GRADIENT, 1, src_gray.rows / 8, 200, 50, 0, 0);

	// 원을 영상 위에 그림 
	for (size_t i = 0; i < circles.size(); i++) {
		
		Point center(cvRound(circles[i][0]), cvRound(circles[i][1]));
		int radius = cvRound(circles[i][2]);
		// 원의 중심 그림 
		circle(src, center, 3, Scalar(0, 255, 0), -1, 8, 0);
		// 반지름에 대한 원을 그림 
		circle(src, center, radius, Scalar(0, 0, 255), 3, 8, 0);
	}

	imshow("Hough circle Transform", src);
	waitKey(0);
	return 0;
}
*/