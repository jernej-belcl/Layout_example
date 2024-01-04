#include "Position.h"
#include <string>
#include <sstream>
Position::Position(float x, float y) :x(x),y(y){}
float Position::getX() const {
    return x;
}

float Position::getY() const {
    return y;
}

std::string Position::toString() const {
    std::stringstream ss;
    ss<<"Position x :"<<x<<" y :"<<y<<" ";
    return ss.str();
}