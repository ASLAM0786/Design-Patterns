#ifndef DEFAULT_CAR_FACTORY_H
#define DEFAULT_CAR_FACTORY_H

#include "CarFactory.h"

class DefaultCarFactory : public CarFactory
{
private:
    /* data */
public:
    DefaultCarFactory();
    ~DefaultCarFactory();
    Car *buildCar(Constant::CarType carType) override;
};

#endif // INDIA_CAR_FACTORY_H