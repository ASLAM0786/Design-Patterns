#ifndef USA_CAR_FACTORY_H
#define USA_CAR_FACTORY_H

#include "CarFactory.h"

class USACarFactory : public CarFactory
{
private:
    /* data */
public:
    USACarFactory();
    ~USACarFactory();
    Car *buildCar(Constant::CarType carType) override;
};

#endif // INDIA_CAR_FACTORY_H