#ifndef CAR_H
#define CAR_H
#include "Constant.h"
class Car
{
private:
    Constant::CarType model;
    Constant::Location location;

public:
    Car(Constant::CarType carType, Constant::Location location);
    ~Car();
    virtual void construct() = 0;

    Constant::CarType getCarType();
    Constant::Location getLocation();
    void setCarType(Constant::CarType carType);
    void setLocation(Constant::Location location);
    void print();
};

#endif // CAR_H