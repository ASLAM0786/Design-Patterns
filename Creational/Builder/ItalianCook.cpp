#include "ItalianCook.h"
#include <iostream>

ItalianCook::ItalianCook()
{
    std::cout << "ItalianCook Constructor Called!\n";
    this->pizza = new Pizza();
}

ItalianCook::~ItalianCook()
{
    std::cout << "ItalianCook Destructor Called!\n";
}

void ItalianCook::buildDough()
{
    pizza->setDough("Italian Dough");
}
void ItalianCook::buildBase()
{
    pizza->setBase("Italian Base");
}
void ItalianCook::buildTopping()
{
    pizza->setTopping("Italian Topping");
}
void ItalianCook::buildSauce()
{
    pizza->setSauce("Italian Sauce");
}
void ItalianCook::buildBake()
{
    pizza->setBake("Italian Bake");
}
void ItalianCook::buildCheese()
{
    pizza->setCheese("Italian Cheese");
}
Pizza *ItalianCook::getPizza()
{
    // Pizza *finalPizza = this->pizza;
    // this->pizza = new Pizza();
    return this->pizza;
}

void ItalianCook::showPizza()
{
    this->pizza->showPizza();
}