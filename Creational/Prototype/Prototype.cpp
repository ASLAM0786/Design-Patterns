#include "Prototype.h"

Prototype::Prototype()
{
    std::cout << "Prototype Default Constructor Called!\n";
}

Prototype::Prototype(std::string prototypeName) : prototypeName(prototypeName)
{
    std::cout << "Prototype Parametrized Constructor Called!\n";
}

Prototype::~Prototype()
{
    std::cout << "Prototype Destructor Called!\n";
}

void Prototype::Method(float prototypeField)
{
    this->prototypeField = prototypeField;
    std::cout << "Call Method from " << prototypeName << " With Field : " << prototypeField;
    std::cout << "\n";
}