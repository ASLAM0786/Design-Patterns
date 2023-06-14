#ifndef CONCRETE_PROTOTYPE1_H
#define CONCRETE_PROTOTYPE1_H
#include "Prototype.h"
class ConcretePrototype1 : public Prototype
{
private:
    float ConcretePrototype1Filed;

public:
    // ConcretePrototype1();
    ConcretePrototype1(std::string prototypeName, float ConcretePrototype1Filed);
    ~ConcretePrototype1();
    Prototype *clone() const override;
};

#endif // CONCRETE_PROTOTYPE1_H