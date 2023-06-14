#include "MacImplementor.h"
#include <iostream>

MacImplementor::MacImplementor()
{
    std::cout << "Mac OS has been selected\n";
}
MacImplementor::~MacImplementor()
{
    std::cout << "MacImplementor Destructor called!\n";
}
void MacImplementor::drawOnMobile()
{
    std::cout << "Mac OS for Mobile\n";
}

void MacImplementor::drawOnDesktop()
{
    std::cout << "Mac OS for Desktop\n";
}