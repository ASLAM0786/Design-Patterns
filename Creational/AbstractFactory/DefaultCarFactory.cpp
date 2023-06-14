#include "DefaultCarFactory.h"
#include "MicroCar.h"
#include "LuxuryCar.h"
#include "Minicar.h"
#include <iostream>
DefaultCarFactory::DefaultCarFactory()
{
    std::cout << "DefaultCarFactory Constructor Called!\n";
}
DefaultCarFactory::~DefaultCarFactory()
{
    std::cout << "DefaultCarFactory Destructor Called!\n";
}

Car *DefaultCarFactory::buildCar(Constant::CarType carType)
{
    Car *car = nullptr;
    switch (carType)
    {
    case Constant::CarType::LUXURY:
        car = new LuxuryCar(Constant::Location::DEFAULT);
        break;
    case Constant::CarType::MICRO:
        car = new MicroCar(Constant::Location::DEFAULT);
        break;
    case Constant::CarType::MINI:
        car = new MiniCar(Constant::Location::DEFAULT);
        break;
    default:
        break;
    }

    return car;
}