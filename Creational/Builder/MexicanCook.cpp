#include "MexicanCook.h"
#include <iostream>

MexicanCook::MexicanCook()
{
    std::cout << "MexicanCook Constructor Called!\n";
    this->pizza = new Pizza();
}
MexicanCook::~MexicanCook()
{
    std::cout << "MexicanCook Destructor Called!\n";
}

void MexicanCook::buildDough()
{
    pizza->setDough("Mexican Dough");
}
void MexicanCook::buildBase()
{
    pizza->setBase("Mexican Base");
}
void MexicanCook::buildTopping()
{
    pizza->setTopping("Mexican Topping");
}
void MexicanCook::buildSauce()
{
    pizza->setSauce("Mexican Sauce");
}
void MexicanCook::buildBake()
{
    pizza->setBake("Mexican Bake");
}
void MexicanCook::buildCheese()
{
    pizza->setCheese("Mexican Cheese");
}
Pizza *MexicanCook::getPizza()
{
    // Pizza *finalPizza = this->pizza; //TODO might be concurency issue because of using same pointer object
    // this->pizza = new Pizza();
    return this->pizza;
}

void MexicanCook::showPizza()
{
    this->pizza->showPizza();
}