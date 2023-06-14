#ifndef SPARROW_H
#define SPARROW_H

#include "Bird.h"
class Sparrow : public Bird
{
private:
public:
    Sparrow();
    ~Sparrow();
    void fly() override;
    void makeSound() override;
};

#endif //