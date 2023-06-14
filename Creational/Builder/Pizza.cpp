#include "Pizza.h"
#include <iostream>

Pizza::Pizza()
{
    std::cout << "Pizza Constructor Called!\n";
}

Pizza::~Pizza()
{
    std::cout << "Pizza Destructor Called!\n";
}

void Pizza::setDough(std::string dough)
{
    this->dough = dough;
}
void Pizza::setBase(std::string base)
{
    this->base = base;
}
void Pizza::setTopping(std::string topping)
{
    this->topping = topping;
}
void Pizza::setSauce(std::string sauce)
{
    this->sauce = sauce;
}
void Pizza::setBake(std::string bake)
{
    this->bake = bake;
}
void Pizza::setCheese(std::string cheese)
{
    this->cheese = cheese;
}

void Pizza::showPizza()
{
    std::cout << dough << " ";
    std::cout << base << " ";
    std::cout << topping << " ";
    std::cout << sauce << " ";
    std::cout << bake << " ";
    std::cout << cheese << " ";
    std::cout << "\n";
}