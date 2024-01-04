#ifndef LAYOUT_BUTTON_H
#define LAYOUT_BUTTON_H
#include "TextView.h"

class Button:  public TextView {
protected:
    bool enabled;
public:
    Button();
    Button(Position position,Size size,std::string text);

    bool isEnabled() const;
    void setEnabled(bool enabled);
    void onClick();
    virtual void draw() const override;

};


#endif
