#include "Size.h"
#include <string>
#include <iostream>
#include <sstream>
Size::Size(float width, float height, Unit unit):width(width),height(height),unit(unit){}

float Size::getWidth() const {
    return width;
}

void Size::setWidth(float width) {
    Size::width = width;
}

float Size::getHeight() const {
    return height;
}

void Size::setHeight(float height) {
    Size::height = height;
}

const Unit &Size::getUnit() const {
    return unit;
}

void Size::setUnit(const Unit &unit) {
    Size::unit = unit;
}

std::string Size::toString() const {
    std::stringstream ss;
    ss<<"Size: "<<width<<" "<<height<<" "<<getUnitInString();
    return ss.str();
}

std::string Size::getUnitInString() const{
  switch(unit){
      case Unit::mm:
      return "mm";
  }

    return "";
}