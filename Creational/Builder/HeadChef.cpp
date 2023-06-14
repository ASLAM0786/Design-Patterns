#include "HeadChef.h"
#include <iostream>
HeadChef::HeadChef(Cook *cook)
{
    std::cout << "HeadChef Constructor Called!\n";
    this->cook = cook;
}

HeadChef::~HeadChef()
{
    std::cout << "HeadChef Destructor Called!\n";
}

void HeadChef::makePizza()
{
    cook->buildDough();
    cook->buildBase();
    cook->buildTopping();
    cook->buildSauce();
    cook->buildBake();
    cook->buildCheese();
}