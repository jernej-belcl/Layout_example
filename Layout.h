#ifndef LAYOUT_LAYOUT_H
#define LAYOUT_LAYOUT_H
#include "View.h"
#include <vector>
#include <iostream>
#include <memory>

class Layout {
private:
    std::vector<std::shared_ptr<View>> views;
public:
    void addView(std::shared_ptr<View> view);
    View getView(int position);
    void draw() const;
};


#endif
