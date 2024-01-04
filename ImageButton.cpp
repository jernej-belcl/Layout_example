#include "ImageButton.h"
#include <sstream>
ImageButton::ImageButton(Position position, Size size, std::string btnname, std::string imgpath): View(position,size),Button(position,size,text),ImageView(position,size,imgpath),btnname(btnname){
    enabled=true;
}

const std::string &ImageButton::getBtnname() const {
    return btnname;
}

void ImageButton::setBtnname(const std::string &btnname) {
    ImageButton::btnname = btnname;
}

void ImageButton::draw() const {
    std::stringstream ss;
    ss<<position.toString()<<" "<<size.toString()<<" "<<btnname<<" "<<imgPath<<" Enabled: "<<enabled;
    std::cout<<ss.str()<<std::endl;
}