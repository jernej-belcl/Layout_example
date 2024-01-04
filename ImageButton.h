#ifndef LAYOUT_IMAGEBUTTON_H
#define LAYOUT_IMAGEBUTTON_H
#include "Button.h"
#include "ImageView.h"
#include "View.h"
class ImageButton:  public Button, public ImageView{
private:
    std::string btnname;
public:
    ImageButton(Position position,Size size,std::string btnname,std::string imgpath);

    const std::string &getBtnname() const;

    void setBtnname(const std::string &btnname);

    void draw() const override;

};


#endif
