#include "Green.h"

#include <iostream>
Green::Green()
{
    std::cout << "Green Constructor called!\n";
}

Green::~Green()
{
    std::cout << "Green Destructor called!\n";
}

void Green::handleReq()
{
    std::cout << "Green!!!\n";
}