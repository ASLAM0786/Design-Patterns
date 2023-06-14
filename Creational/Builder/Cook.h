#ifndef COOK_H
#define COOK_H

#include "Pizza.h"
class Cook
{
private:
public:
    virtual void buildDough() = 0;
    virtual void buildBase() = 0;
    virtual void buildTopping() = 0;
    virtual void buildSauce() = 0;
    virtual void buildBake() = 0;
    virtual void buildCheese() = 0;
    virtual Pizza *getPizza() = 0;
};

#endif //