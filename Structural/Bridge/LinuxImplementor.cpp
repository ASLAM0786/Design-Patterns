#include "LinuxImplementor.h"
#include <iostream>

LinuxImplementor::LinuxImplementor()
{
    std::cout << "Linux OS has been selected\n";
}
LinuxImplementor::~LinuxImplementor()
{
    std::cout << "LinuxImplementor Destructor called!\n";
}
void LinuxImplementor::drawOnMobile()
{
    std::cout << "Linux OS for Mobile\n";
}

void LinuxImplementor::drawOnDesktop()
{
    std::cout << "Linux OS for Desktop\n";
}