#include "AbstractFactory.h"
#include "IndiaCarFactory.h"
#include "USACarFactory.h"
#include "DefaultCarFactory.h"

AbstractFactory::AbstractFactory() {}
AbstractFactory::~AbstractFactory() {}

CarFactory *AbstractFactory::buildCar(Constant::CarType carType, Constant::Location location)
{
    CarFactory *carFactory = nullptr;
    // TODO location param must get from system location info
    switch (location)
    {
    case Constant::Location::INDIA:
        carFactory = new IndiaCarFactory();
        break;
    case Constant::Location::USA:
        carFactory = new USACarFactory();
        break;
    case Constant::Location::DEFAULT:
        carFactory = new DefaultCarFactory();
        break;
    default:
        break;
    }
    return carFactory;
}