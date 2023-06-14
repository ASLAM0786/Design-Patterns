#include "MicroCar.h"
#include <iostream>
MicroCar::MicroCar(Constant::Location location) : Car(Constant::CarType::MICRO, location)
{
    std::cout << "MicroCar constructor Called!\n";
    construct();
}

MicroCar::~MicroCar()
{
    std::cout << "MicroCar Destructor Called!\n";
}

void MicroCar::construct()
{
    std::cout << "Constructive a MicroCar Car\n";
}