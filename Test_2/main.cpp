#include "mainwindow.h"

#include <QApplication>

#include "opencv2/opencv.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    using namespace cv;
    Mat image = imread("c:/programming/QtProjects/Test_2/my_src/test_img.jpg");
    imshow("Output", image);

    return a.exec();
}

