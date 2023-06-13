#include "Car.h"

Car::Car(Constant::CarType carType, Constant::Location location)
{
    this->model = carType;
    this->location = location;
}

Car::~Car()
{ // todo
}

Constant::CarType Car::getCarType()
{
    return model;
}

Constant::Location Car::getLocation()
{
    return location;
}

void Car::setCarType(Constant::CarType carType)
{
    this->model = carType;
}

void Car::setLocation(Constant::Location location)
{
    this->location = location;
}