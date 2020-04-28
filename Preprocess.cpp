// Preprocess.cpp

#include "Preprocess.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
void preprocess(cv::Mat &imgOriginal, cv::Mat &imgGrayscale, cv::Mat &imgThresh) {

	imgGrayscale = extractValue(imgOriginal);                           // extract value channel only from original image to get imgGrayscale


	cv::Mat imgMaxContrastGrayscale = maximizeContrast(imgGrayscale);       // maximize contrast with top hat and black hat

	cv::Mat imgBlurred;

	cv::GaussianBlur(imgMaxContrastGrayscale, imgBlurred, GAUSSIAN_SMOOTH_FILTER_SIZE, 0);          // gaussian blur
	cv::imshow("imgBlurred", imgBlurred);
	// call adaptive threshold to get imgThresh

	cv::adaptiveThreshold(imgBlurred, imgThresh, 255.0, CV_ADAPTIVE_THRESH_GAUSSIAN_C, CV_THRESH_BINARY_INV, ADAPTIVE_THRESH_BLOCK_SIZE, ADAPTIVE_THRESH_WEIGHT);
	cv::imshow("imgThresh", imgThresh);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
cv::Mat extractValue(cv::Mat &imgOriginal) {
	cv::Mat imgHSV;
	std::vector<cv::Mat> vectorOfHSVImages;
	cv::Mat imgValue;

	cv::cvtColor(imgOriginal, imgHSV, CV_BGR2HSV);

	cv::split(imgHSV, vectorOfHSVImages);
	imgValue = vectorOfHSVImages[2];
	cv::imshow("from preprocess", imgValue);
	//std::cout << "from preprocess " << imgValue << std::endl;
	return(imgValue);
}

///////////////////////////////////////////////////////////////////////////////////////////////////
cv::Mat maximizeContrast(cv::Mat &imgGrayscale) {
	cv::Mat imgTopHat;
	cv::Mat imgBlackHat;
	cv::Mat imgGrayscalePlusTopHat;
	cv::Mat imgGrayscalePlusTopHatMinusBlackHat;

	cv::Mat structuringElement = cv::getStructuringElement(CV_SHAPE_RECT, cv::Size(3, 3));


	cv::morphologyEx(imgGrayscale, imgTopHat, CV_MOP_TOPHAT, structuringElement);
	cv::imshow("imgTopHat", imgTopHat);
	cv::morphologyEx(imgGrayscale, imgBlackHat, CV_MOP_BLACKHAT, structuringElement);
	cv::imshow("imgBlackHat", imgBlackHat);
	imgGrayscalePlusTopHat = imgGrayscale + imgTopHat;
	cv::imshow("imgGrayscalePlusTopHat", imgGrayscalePlusTopHat);
	imgGrayscalePlusTopHatMinusBlackHat = imgGrayscalePlusTopHat - imgBlackHat;
	cv::imshow("imgGrayscalePlusTopHatMinusBlackHat", imgGrayscalePlusTopHatMinusBlackHat);
	return(imgGrayscalePlusTopHatMinusBlackHat);

}


