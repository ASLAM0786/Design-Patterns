#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H
#include "CarFactory.h"
#include "Car.h"
#include "Constant.h"

class AbstractFactory
{
public:
    AbstractFactory();
    ~AbstractFactory();
    static CarFactory *buildCar(Constant::CarType carType, Constant::Location location);
};

#endif // ABSTRACT_FACTORY_H