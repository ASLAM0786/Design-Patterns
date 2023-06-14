#ifndef WINDOW_H
#define WINDOW_H

#include "WindowImp.h"

class Window
{
protected:
    WindowImp *windowImp;

public:
    Window(WindowImp *windowImp) : windowImp(windowImp){};
    virtual ~Window(){};
    virtual void draw() = 0;
};

#endif
