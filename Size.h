#ifndef LAYOUT_SIZE_H
#define LAYOUT_SIZE_H
#include "Unit.h"
#include <iostream>
class Size {
private:
    float width,height;
    Unit unit;
public:
    Size(float width,float height,Unit unit);

    float getWidth() const;

    void setWidth(float width);

    float getHeight() const;

    void setHeight(float height);

    const Unit &getUnit() const;

    void setUnit(const Unit &unit);

    std::string toString() const;
    std::string getUnitInString() const;
};


#endif
