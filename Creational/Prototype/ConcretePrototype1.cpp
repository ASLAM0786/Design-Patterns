#include "ConcretePrototype1.h"
#include <iostream>

// ConcretePrototype1::ConcretePrototype1()
// {
//     std::cout << "Default Constructor Called!\n";
// }
ConcretePrototype1::ConcretePrototype1(std::string prototypeName, float ConcretePrototype1Filed)
    : Prototype(prototypeName), ConcretePrototype1Filed(ConcretePrototype1Filed)

{
    std::cout << "ConcretePrototype1 Parametrized Constructor Called!\n";
}

ConcretePrototype1::~ConcretePrototype1()
{
    std::cout << "ConcretePrototype1 Destructor Called!\n";
}

Prototype *ConcretePrototype1::clone() const
{
    std::cout << "ConcretePrototype1 clone() Called!\n";
    return new ConcretePrototype1(*this);
}