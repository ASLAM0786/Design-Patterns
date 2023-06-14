#ifndef MICRO_CAR_H
#define MICRO_CAR_H
#include "Car.h"

class MicroCar : public Car
{
private:
    /* data */
public:
    MicroCar(Constant::Location);
    ~MicroCar();
    void construct() override;
};

#endif