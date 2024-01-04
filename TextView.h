#ifndef LAYOUT_TEXTVIEW_H
#define LAYOUT_TEXTVIEW_H
#include <iostream>
#include "Position.h"
#include "View.h"

class TextView : virtual public View{
protected:
    std::string text;
public:
    TextView(Position position,Size size,std::string text);
    const std::string &getText() const;
    void setText(const std::string &text);
    virtual void draw() const override;


};


#endif
