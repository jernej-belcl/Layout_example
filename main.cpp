#include <iostream>
#include "Button.h"
#include "View.h"
#include "Layout.h"
#include "ImageButton.h"
#include <memory>

int main() {
    std::cout << "Jernej Belcl" << std::endl;
    std::shared_ptr<Button> button1;
    button1 = std::make_shared<Button>(Position(5,12),Size(8,28,Unit::mm),"poljubnknof");
    button1->onClick();
    button1->setEnabled(false);
    button1->onClick();
    std::cout<<button1->isEnabled()<<std::endl;
    button1->setVisible(false);

    std::shared_ptr<ImageView> img;
    img = std::make_shared<ImageView>(Position(5,12),Size(8,28,Unit::mm),"c:/Slike/izleti");
    //std::cout<<img->isEnabled()<<std::endl;
    img->setVisible(false);
    std::cout<<img->isVisible()<<std::endl;

    //Layout layout1;
    std::shared_ptr<Layout> layout1;
    layout1 = std::make_shared<Layout>();
    layout1->addView(static_cast<std::shared_ptr<Button>>(std::make_shared<Button>(Position(5,12),Size(8,28,Unit::mm),"poljubnknof")));
    layout1->addView(static_cast<std::shared_ptr<View>>(std::make_shared<View>(Position(20,10),Size(10,20,Unit::mm))));
    layout1->addView(static_cast<std::shared_ptr<TextView>>(std::make_shared<TextView>(Position(32,17),Size(10,20,Unit::mm),"poljubentext")));
    layout1->addView(static_cast<std::shared_ptr<ImageView>>(std::make_shared<ImageView>(Position(27,15),Size(7,17,Unit::mm),"c:/slike/slika-ser")));
    layout1->addView(static_cast<std::shared_ptr<View>>(std::make_shared<View>(Position(88,41),Size(5,65,Unit::mm))));
    layout1->addView(static_cast<std::shared_ptr<TextView>>(std::make_shared<TextView>(Position(23,48),Size(3,4,Unit::mm),"nekitext")));
    layout1->addView(static_cast<std::shared_ptr<Button>>(std::make_shared<ImageButton>(Position(0, 4), Size(10, 2, Unit::mm), "Potrdi", "/../images/confirm.png")));
    layout1->draw();
    std::cout<<"----------"<<std::endl;

    layout1->getView(1).draw();

    return 0;
}
