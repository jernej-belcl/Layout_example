#ifndef LAYOUT_POSITION_H
#define LAYOUT_POSITION_H
#include <iostream>

class Position {
private:
    float x,y;
public:
    Position(float x,float y);

    float getX() const;

    float getY() const;

    std::string toString() const;

};


#endif
