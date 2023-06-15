#include "VegRestaurant.h"
#include <iostream>

VegRestaurant::VegRestaurant()
{
    std::cout << "VegRestaurant Constructor Called!\n";
}

VegRestaurant::~VegRestaurant()
{
    std::cout << "VegRestaurant Destructor Called!\n";
}

Constant::Menu VegRestaurant::getMenus()
{
    return new VegRestaurant();
}