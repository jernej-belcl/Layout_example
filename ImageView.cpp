#include "ImageView.h"
#include <iostream>
#include <sstream>
ImageView::ImageView(Position position, Size size, std::string imgPath): View(position,size),imgPath(imgPath) {}
const std::string &ImageView::getImgPath() const {
    return imgPath;
}

void ImageView::setImgPath(const std::string &imgPath) {
    ImageView::imgPath = imgPath;
}

void ImageView::draw() const {
    std::stringstream ss;
    ss<<position.toString()<<" "<<size.toString()<<" "<<imgPath;
    std::cout<<ss.str()<<std::endl;
}