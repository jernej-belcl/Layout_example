#include "Layout.h"

void Layout::addView(std::shared_ptr<View> view) {
    views.push_back(view);
}

View Layout::getView(int position) {
    for(int i=0;i<views.size();i++)
    {
        if(position==i+1)
        {
            return *views[i];
        }
    }
}

void Layout::draw() const {
    for(int i=0;i<views.size();i++)
    {
        views[i]->draw();
    }
}