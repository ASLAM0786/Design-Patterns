#ifndef MINI_CAR_H
#define MINI_CAR_H
#include "Car.h"

class MiniCar : public Car
{
private:
    /* data */
public:
    MiniCar(Constant::Location);
    ~MiniCar();
    void construct() override;
};

#endif