#ifndef BIRD_H
#define BIRD_H

class Bird
{
private:
public:
    virtual void fly() = 0;
    virtual void makeSound() = 0;
    virtual ~Bird(){};
};

#endif //