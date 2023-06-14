#ifndef PLASTIC_TOY_DUCK_H
#define PLASTIC_TOY_DUCK_H
#include "ToyDuck.h"

class PlasticToyDuck : public ToyDuck
{
private:
public:
    PlasticToyDuck();
    ~PlasticToyDuck();
    void squeak() override;
};

#endif //