#include "Button.h"
#include <sstream>
Button::Button(Position position, Size size, std::string text):View(position,size),TextView(position,size,text){
    enabled= true;
}
bool Button::isEnabled() const {
    return enabled;
}

void Button::setEnabled(bool enabled) {
    Button::enabled = enabled;
}

void Button::onClick(){
    if(enabled)
    {
        std::cout<<"Poljuben izpis onClick"<<std::endl;
    }
    else{}
}

void Button::draw() const{
    std::stringstream ss;
    ss<<position.toString()<<" "<<size.toString()<<" "<<text<<" Enabled:"<<enabled;
    std::cout<<ss.str()<<std::endl;
}