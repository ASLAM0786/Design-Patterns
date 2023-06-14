#ifndef CAR_FACTORY_H
#define CAR_FACTORY_H
#include "Constant.h"
#include "Car.h"

class CarFactory
{
private:
public:
    virtual Car *buildCar(Constant::CarType carType) = 0;
};

#endif // CAR_FACTORY_H
