#include "PrototypeFactory.h"

#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"
#include <iostream>

PrototypeFactory::PrototypeFactory()
{
    std::cout << "PrototypeFactory Parameterized Constructor called!\n";
    prototypes_[Constant::classType::PROTOTYPE_1] = new ConcretePrototype1("PROTOTYPE_1", 50.f);
    prototypes_[Constant::classType::PROTOTYPE_2] = new ConcretePrototype2("PROTOTYPE_2", 60.f);
}

PrototypeFactory::~PrototypeFactory()
{
    std::cout << "PrototypeFactory Destructor called!\n";
    delete prototypes_[Constant::classType::PROTOTYPE_1];
    delete prototypes_[Constant::classType::PROTOTYPE_2];
}

Prototype *PrototypeFactory::CreatePrototype(Constant::classType classType)
{
    return prototypes_[classType]->clone();
}