#ifndef LUXURY_CAR_H
#define LUXURY_CAR_H
#include "Car.h"

class LuxuryCar : public Car
{
private:
    /* data */
public:
    LuxuryCar(Constant::Location);
    ~LuxuryCar();
    void construct() override;
};

#endif