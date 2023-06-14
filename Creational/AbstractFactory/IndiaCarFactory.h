#ifndef INDIA_CAR_FACTORY_H
#define INDIA_CAR_FACTORY_H

#include "CarFactory.h"

class IndiaCarFactory : public CarFactory
{
private:
    /* data */
public:
    IndiaCarFactory();
    ~IndiaCarFactory();
    Car *buildCar(Constant::CarType carType) override;
};

#endif // INDIA_CAR_FACTORY_H