#include "PlasticToyDuck.h"
#include <iostream>

PlasticToyDuck::PlasticToyDuck()
{
    std::cout << "PlasticToyDuck Constructor Called!\n";
}

PlasticToyDuck::~PlasticToyDuck()
{
    std::cout << "PlasticToyDuck Destructor Called!\n";
}

void PlasticToyDuck::squeak()
{
    std::cout << "Squeaking\n";
}