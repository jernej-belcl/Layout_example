#ifndef LAYOUT_IMAGEVIEW_H
#define LAYOUT_IMAGEVIEW_H
#include "View.h"
#include <iostream>
#include "Position.h"
class ImageView : public virtual View{
protected:
    std::string imgPath;
public:
    ImageView(Position position,Size size,std::string imgPath);

    const std::string &getImgPath() const;

    void setImgPath(const std::string &imgPath);

    virtual void draw() const override;

};


#endif
