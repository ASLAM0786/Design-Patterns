#include "MobileWindow.h"
#include <iostream>

MobileWindow::MobileWindow(WindowImp *windowImp) : Window(windowImp)
{
    std::cout << "Need Mobile Window\n";
}

MobileWindow::~MobileWindow()
{
    std::cout << "MobileWindow Destructor Called!\n";
}
void MobileWindow::draw()
{
    windowImp->drawOnMobile();
}