#include "MyForm2.h"
#include<iostream>
#include<opencv2\imgproc\imgproc.hpp>
#include<opencv2\imgproc\imgproc_c.h>
#include<opencv2\highgui\highgui.hpp>
#include<opencv2\highgui\highgui_c.h>
#include<opencv2\core\core.hpp>
#include<opencv2\core\core_c.h>
#include<conio.h>
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

using namespace std;
using namespace cv;
class Numberpplate
{
public:
	Mat plate_pic, threshed_pic, gray_pic;
};
class Numbepchar
{
public:
	int x_center, y_center;
	Rect rect_bound;
	double diag, ratio;
	vector<cv::Point> contour;
	Numbepchar(vector<cv::Point> cont)
	{
		contour = cont;
		rect_bound = boundingRect(contour);
		x_center = (rect_bound.x + rect_bound.x + rect_bound.width) / 2;
		diag = sqrt(pow(rect_bound.width, 2) + pow(rect_bound.height, 2));
		ratio = (float)rect_bound.width / (float)rect_bound.height;
		y_center = (rect_bound.y + rect_bound.y + rect_bound.height) / 2;
		
	}
	void show(vector<cv::Point> ch)
	{
		for (int i = 0;i < ch.size();i++)
		{
			cout << "ch" << i << ch[i] << endl;
		}
	}

};
void imgPreprocessing(Mat &img_source, Mat &img_gray, Mat &img_thresh)
{
	Mat mat1 = img_source;
	Mat hsvtest;
	vector<Mat> vectertest;
	cvtColor(mat1, hsvtest, CV_BGR2HSV);
	split(hsvtest, vectertest);
	Mat dilation;
	Mat elem = getStructuringElement(CV_SHAPE_RECT, cv::Size(3, 3));
	dilate(mat1, dilation, elem);
	Mat erosion;
	erode(dilation, erosion, elem);
	Mat dilation1, erosion1;
	erode(mat1, erosion1, elem);
	dilate(erosion1, dilation1, elem);
	imshow("dilation", dilation);
	imshow("erosion", erosion);
	imshow("dilation1", dilation1);
	imshow("erosion1", erosion1);
	Mat grayminusdilation = mat1 - dilation1;
	imshow("grayminusdilation", grayminusdilation);
	Mat erosionminusgray = erosion - mat1;
	imshow("erosionminusgray", erosionminusgray);
	Mat hsv, val, top_hat, black_hat, graytophat, grayblackhat;
	vector<Mat> hsv_vector;
	cvtColor(img_source, hsv, CV_BGR2HSV);
	split(hsv, hsv_vector);
	imshow("hsv", hsv);
	val = hsv_vector[2];
	img_gray = val;
	Mat struct_elem = getStructuringElement(CV_SHAPE_RECT, cv::Size(3, 3));
	morphologyEx(img_gray, top_hat, CV_MOP_TOPHAT, struct_elem);
	morphologyEx(img_gray, black_hat, CV_MOP_BLACKHAT, struct_elem);
	grayblackhat = (img_gray + top_hat) - black_hat;
	Mat storegrayblackhat, blur_img;
	storegrayblackhat = grayblackhat;
	GaussianBlur(storegrayblackhat, blur_img, cv::Size(5, 5), 0);
	adaptiveThreshold(blur_img, img_thresh, 255.0, 1, 1, 19, 9);
	//adaptiveThreshold(val, img_thresh, 255.0, 1, 1, 19, 9);
}
vector<Numbepchar> maybe_char_vector_fun(Mat &read_img_thresh_para)
{
	vector<Numbepchar> maybe_char_vector_return;
	vector<vector<cv::Point> > contours;
	Mat contour_inimage(read_img_thresh_para.size(), CV_8UC3, Scalar(0.0, 0.0, 0.0));
	Mat copy_read_img_thresh_para = read_img_thresh_para.clone();

	findContours(copy_read_img_thresh_para, contours, 1, 2);
	for (int i = 0;i < contours.size();i++)
	{
		drawContours(contour_inimage, contours, i, Scalar(100.0, 25.0, 200.0));
		Numbepchar obj1(contours[i]);
		if (obj1.rect_bound.width > 2 && obj1.rect_bound.height > 8 && 0.25 < obj1.ratio && obj1.ratio < 1.0&&obj1.rect_bound.area() > 80)
		{
			maybe_char_vector_return.push_back(obj1);
		}
	}
	imshow("contour_inimage", contour_inimage);
	return maybe_char_vector_return;
}
vector<Numberpplate> plate_det_fun(Mat &read_img)
{
	vector<Numberpplate> plate_return_vector;
	Mat read_img_gray, read_img_thresh, read_img_contours(read_img.size(), CV_8UC3, Scalar(0.0, 0.0, 0.0));
	imgPreprocessing(read_img, read_img_gray, read_img_thresh);
	imshow("  read_img_gray", read_img_gray);
	imshow(" read_img_thresh", read_img_thresh);
	vector<Numbepchar> maybe_char_vector = maybe_char_vector_fun(read_img_thresh);
	read_img_contours = Mat(read_img.size(), CV_8UC3, Scalar(0.0, 0.0, 0.0));
	vector<vector<cv::Point> > contours;
	for (auto &obj2 : maybe_char_vector)
	{
		contours.push_back(obj2.contour);
	}
	drawContours(read_img_contours, contours, -1, Scalar(255.0, 255.0, 255.0));
	imshow("read_img_contours", read_img_contours);
	return  plate_return_vector;
}
void fun()
{
	Mat read_img = imread("43ef4b84ed6526c186733b120ee866460b1fddf2.jpg");
	Mat second_contour(read_img.size(), CV_8UC3, Scalar(0, 0, 0));
	if (read_img.empty())
	{
		cout << "image does not read" << endl;
		_getch();

	}
	vector<Numberpplate> plate_vector = plate_det_fun(read_img);
	waitKey();
	_getch();
}


