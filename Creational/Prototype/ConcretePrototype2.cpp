#include "ConcretePrototype2.h"
#include <iostream>

// ConcretePrototype2::ConcretePrototype2()
// {
//     std::cout << "Default Constructor Called!\n";
// }
ConcretePrototype2::ConcretePrototype2(std::string prototypeName, float ConcretePrototype2Filed)
    : Prototype(prototypeName), ConcretePrototype2Filed(ConcretePrototype2Filed)

{
    std::cout << "ConcretePrototype2 Parametrized Constructor Called!\n";
}

ConcretePrototype2::~ConcretePrototype2()
{
    std::cout << "ConcretePrototype2 Destructor Called!\n";
}

Prototype *ConcretePrototype2::clone() const
{
    return new ConcretePrototype2(*this);
}