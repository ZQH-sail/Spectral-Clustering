#pragma once
#include"cv.h"
#include "highgui.h"
#include "highgui.hpp"
#include "core.hpp"
#include "string"
#define CONTOUR_SIGN 100
using namespace std;
using namespace cv;
int caculateRoiNum(Mat& img,string &si,string& sPathName, Mat& imgs);/*�õ�һ�������е��������ص�*/
int caculateContourNum(Mat& img, int di, int dj,int minX,int minY,int maxX,int maxY);
