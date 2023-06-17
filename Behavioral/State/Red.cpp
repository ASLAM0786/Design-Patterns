#include "Red.h"

#include <iostream>
Red::Red()
{
    std::cout << "Red Constructor called!\n";
}

Red::~Red()
{
    std::cout << "Red Destructor called!\n";
}

void Red::handleReq()
{
    std::cout << "Red!!!\n";
}