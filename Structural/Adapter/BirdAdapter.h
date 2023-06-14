#ifndef BIRD_ADAPTER_H
#define BIRD_ADAPTER_H
#include "ToyDuck.h"
#include "Bird.h"
class BirdAdapter : public ToyDuck
{
protected:
    Bird *bird;

public:
    BirdAdapter(Bird *bird);
    ~BirdAdapter();
    void squeak() override;
};

#endif //