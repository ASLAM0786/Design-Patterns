#include "LuxuryCar.h"
#include <iostream>
LuxuryCar::LuxuryCar(Constant::Location location) : Car(Constant::CarType::LUXURY, location)
{
    std::cout << "LuxuryCar Constructor Called!\n";
    construct();
}
LuxuryCar::~LuxuryCar()
{
    std::cout << "LuxuryCar Destructor Called!\n";
}

void LuxuryCar::construct()
{
    std::cout << "Constructing a Luxury Car\n";
}
