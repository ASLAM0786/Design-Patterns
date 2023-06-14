#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include <string>
#include <iostream>
class Prototype
{
private:
    std::string prototypeName;
    float prototypeField;

public:
    Prototype();
    Prototype(std::string prototypeName);
    virtual ~Prototype();
    virtual Prototype *clone() const = 0;
    virtual void Method(float prototypeField);
};

#endif