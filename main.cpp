#include <QApplication>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <stdio.h>

using namespace cv;
using namespace std;

int main(int, char **) {
  Mat src;
  src = imread("./1.png");
  imshow("sample", src);
  waitKey(0);
  return 0;
}
