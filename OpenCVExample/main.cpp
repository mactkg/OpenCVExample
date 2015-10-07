//
//  main.cpp
//  OpenCVExample
//
//  Created by Kenta Hara on 2015/10/07.
//  Copyright © 2015 Kenta Hara. All rights reserved.
//  Codes from http://qiita.com/imura/items/d5fadbbcf1830019adce

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, char **argv)
{
    std::string window_input = "input";
    cv::namedWindow(window_input, CV_WINDOW_AUTOSIZE);
    
    std::string window_output = "output";
    cv::namedWindow(window_output, CV_WINDOW_AUTOSIZE);
    
    cv::VideoCapture cap;
    cap.open(0);
    if (!cap.isOpened()) {
        std::cerr << "cannot find camera" << std::endl;
        return -1;
    }
    
    while (1) {
        cv::Mat frame;
        cap >> frame;
        cv::Mat gray;
        cv::cvtColor(frame, gray, CV_BGR2GRAY);
        
        cv::imshow(window_input, frame);
        cv::imshow(window_output, gray);
        
        int key = cv::waitKey(10);
        if (key == 3 || key == 27 || key == 'q') {
            break;
        }
    }
    
    return 0;
}