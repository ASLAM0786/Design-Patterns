/**
 **Intent:
 Provide an interface for creating families of related or dependent objects without specifying
  their concrete classes.
 **Problem:
 **Pros:
1- Isolation of concrete classes
2- Exchanging Product Families easily
3- Promoting consistency among products
 **Cons:
 **Applicability:
 1-the system needs to be independent from the way the products it works with are created.
2-the system is or should be configured to work with multiple families of products.
3-A family of products is designed to work only all together.
4-the creation of a library of products is needed, for which is relevant only the interface, not the implementation, too.
 */

#include "AbstractFactory.h"
int main()
{
    // TODO client code should be here;
    Constant::CarType carType = Constant::CarType::LUXURY;   //?hardcode carType
    Constant::Location location = Constant::Location::INDIA; // todo write logic here to get location
    CarFactory *carFactory = AbstractFactory::buildCar(carType, location);
    Car *car = carFactory->buildCar(carType);
    return 0;
}