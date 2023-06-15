#include "Circle.h"
#include <iostream>
Circle::Circle()
{
    std::cout << "Circle Constructor called!\n";
}

Circle::~Circle()
{
    std::cout << "Circle Destructor called!\n";
}

void Circle::draw()
{
    std::cout << "Shape: Circle\n";
}