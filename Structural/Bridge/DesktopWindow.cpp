#include "DesktopWindow.h"
#include <iostream>
DesktopWindow::DesktopWindow(WindowImp *windowImp) : Window(windowImp)
{
    std::cout << "Need Desktop Window\n";
}

DesktopWindow::~DesktopWindow()
{
    std::cout << "DesktopWindow Destructor Called!\n";
}

void DesktopWindow::draw()
{
    windowImp->drawOnMobile();
}