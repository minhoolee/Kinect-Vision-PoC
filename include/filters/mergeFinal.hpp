#ifndef MERGE_FINAL_HPP
#define MERGE_FINAL_HPP

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

void mergeFinal(cv::Mat &color, cv::Mat &color_orig, cv::Mat &depth, cv::Mat &depth_orig, cv::Mat &final_img, int &weight1, int &weight2, int &merge_type);

#endif // MERGE_FINAL_HPP
