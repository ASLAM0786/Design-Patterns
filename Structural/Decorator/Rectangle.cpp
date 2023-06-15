#include "Rectangle.h"
#include <iostream>
Rectangle::Rectangle()
{
    std::cout << "Rectangle Constructor called!\n";
}

Rectangle::~Rectangle()
{
    std::cout << "Rectangle Destructor called!\n";
}

void Rectangle::draw()
{
    std::cout << "Shape: Rectangle\n";
}