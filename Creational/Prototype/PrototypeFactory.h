#ifndef PROTOTYPE_FACTORY_H
#define PROTOTYPE_FACTORY_H
#include "Constant.h"
#include "Prototype.h"
#include <unordered_map>
#include <functional>

class PrototypeFactory
{
private:
    //* std::hash><int>
    std::unordered_map<Constant::classType, Prototype *> prototypes_;

public:
    PrototypeFactory(/* args */);
    ~PrototypeFactory();
    Prototype *CreatePrototype(Constant::classType classType);
};
#endif // PROTOTYPE_FACTORY_H