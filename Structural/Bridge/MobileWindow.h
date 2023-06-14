#ifndef MOBILE_WINDOW_H
#define MOBILE_WINDOW_H

#include "Window.h"
class MobileWindow : public Window
{
public:
    MobileWindow(WindowImp *windowImp);
    ~MobileWindow();
    void draw() override;
};

#endif //