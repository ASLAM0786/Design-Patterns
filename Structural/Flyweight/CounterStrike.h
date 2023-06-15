#ifndef COUNTER_STRIKE_H
#define COUNTER_STRIKE_H
#include "Constant.h"

class CounterStrike
{

public:
    static Constant::playerType getRandomPlayerType();
    static Constant::Weapon getRandomWeapon();
};

#endif