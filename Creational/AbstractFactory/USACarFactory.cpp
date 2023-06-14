#include "USACarFactory.h"
#include "MicroCar.h"
#include "LuxuryCar.h"
#include "Minicar.h"
#include <iostream>
USACarFactory::USACarFactory()
{
    std::cout << "USACarFactory Constructor Called!\n";
}
USACarFactory::~USACarFactory()
{
    std::cout << "USACarFactory Destructor Called!\n";
}

Car *USACarFactory::buildCar(Constant::CarType carType)
{
    Car *car = nullptr;
    switch (carType)
    {
    case Constant::CarType::LUXURY:
        car = new LuxuryCar(Constant::Location::USA);
        break;
    case Constant::CarType::MICRO:
        car = new MicroCar(Constant::Location::USA);
        break;
    case Constant::CarType::MINI:
        car = new MiniCar(Constant::Location::USA);
        break;
    default:
        break;
    }

    return car;
}