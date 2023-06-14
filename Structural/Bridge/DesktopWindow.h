#ifndef DESKTOP_WINDOW_H
#define DESKTOP_WINDOW_H

#include "Window.h"
class DesktopWindow : public Window
{
public:
    DesktopWindow(WindowImp *windowImp);
    ~DesktopWindow();
    void draw() override;
};

#endif //