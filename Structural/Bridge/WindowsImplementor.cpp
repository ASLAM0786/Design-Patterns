#include "WindowsImplementor.h"
#include <iostream>

WindowsImplementor::WindowsImplementor()
{
    std::cout << "Windows OS has been selected\n";
}
WindowsImplementor::~WindowsImplementor()
{
    std::cout << "WindowsImplementor Destructor called!\n";
}
void WindowsImplementor::drawOnMobile()
{
    std::cout << "Windows OS for Mobile\n";
}

void WindowsImplementor::drawOnDesktop()
{
    std::cout << "Windows OS for Desktop\n";
}