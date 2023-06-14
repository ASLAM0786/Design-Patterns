#ifndef HEAD_CHEF_H
#define HEAD_CHEF_H

#include "Cook.h"

class HeadChef
{
private:
    Cook *cook;

public:
    HeadChef(Cook *cook);
    ~HeadChef();
    void makePizza();
};

#endif //
