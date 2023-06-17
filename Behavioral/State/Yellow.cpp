#include "Yellow.h"

#include <iostream>
Yellow::Yellow()
{
    std::cout << "Yellow Constructor called!\n";
}

Yellow::~Yellow()
{
    std::cout << "Yellow Destructor called!\n";
}

void Yellow::handleReq()
{
    std::cout << "Yellow!!!\n";
}