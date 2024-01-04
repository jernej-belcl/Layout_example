#ifndef LAYOUT_VIEW_H
#define LAYOUT_VIEW_H

#include "Size.h"
#include "Position.h"

class View {
protected:
    Position position;
    Size size;
    bool visible;
public:
    View(Position position,Size size);

    const Position &getPosition() const;

    void setPosition(const Position &position);

    const Size &getSize() const;

    void setSize(const Size &size);

    bool isVisible();
    void setVisible(bool visible);
    virtual void draw() const;

};


#endif
