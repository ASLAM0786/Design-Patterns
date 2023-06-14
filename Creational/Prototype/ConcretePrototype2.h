#ifndef CONCRETE_PROTOTYPE2_H
#define CONCRETE_PROTOTYPE2_H
#include "Prototype.h"
class ConcretePrototype2 : public Prototype
{
private:
    float ConcretePrototype2Filed;

public:
    // ConcretePrototype2();
    ConcretePrototype2(std::string prototypeName, float ConcretePrototype2Filed);
    ~ConcretePrototype2();
    Prototype *clone() const override;
};

#endif // CONCRETE_PROTOTYPE2_H