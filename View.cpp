#include "View.h"
#include <sstream>
#include <iostream>
View::View(Position position, Size size):position(position),size(size){}
const Position &View::getPosition() const {
    return position;
}

void View::setPosition(const Position &position) {
    View::position = position;
}

const Size &View::getSize() const {
    return size;
}

void View::setSize(const Size &size) {
    View::size = size;
}

bool View::isVisible() {
    if(visible) return true;
    else return false;
}

void View::setVisible(bool visible) {
    this->visible=visible;
}

void View::draw() const {
    std::stringstream ss;
    ss<<position.toString()<<" "<<size.toString();
    std::cout<<ss.str()<<std::endl;
}