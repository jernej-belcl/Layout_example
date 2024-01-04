#include "TextView.h"
#include "sstream"
#include "string"
TextView::TextView(Position position,Size size,std::string text):View(position,size),text(text){}
const std::string &TextView::getText() const {
    return text;
}

void TextView::setText(const std::string &text) {
    TextView::text = text;
}

void TextView::draw() const {
    std::stringstream ss;
    ss<<position.toString()<<" "<<size.toString()<<" "<<text;
    std::cout<<ss.str()<<std::endl;
}