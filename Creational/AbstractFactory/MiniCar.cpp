#include "MiniCar.h"
#include <iostream>
MiniCar::MiniCar(Constant::Location location) : Car(Constant::CarType::MINI, location)
{
    std::cout << "MiniCar Constructor Called!\n";
    construct();
}
MiniCar::~MiniCar()
{
    std::cout << "MiniCar Destructor Called!\n";
}

void MiniCar::construct()
{
    std::cout << "Constructing a Luxury Car\n";
}