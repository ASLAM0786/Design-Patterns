#include "IndiaCarFactory.h"
#include "MicroCar.h"
#include "LuxuryCar.h"
#include "Minicar.h"
#include <iostream>

IndiaCarFactory::IndiaCarFactory()
{
    std::cout << "IndiaCarFactory Constructor Called!\n";
}
IndiaCarFactory::~IndiaCarFactory()
{
    std::cout << "IndiaCarFactory Destructor Called!\n";
}
Car *IndiaCarFactory::buildCar(Constant::CarType carType)
{
    Car *car = nullptr;
    switch (carType)
    {
    case Constant::CarType::LUXURY:
        car = new LuxuryCar(Constant::Location::INDIA);
        break;
    case Constant::CarType::MICRO:
        car = new MicroCar(Constant::Location::INDIA);
        break;
    case Constant::CarType::MINI:
        car = new MiniCar(Constant::Location::INDIA);
        break;
    default:
        break;
    }

    return car;
}