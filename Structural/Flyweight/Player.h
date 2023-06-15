#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Constant.h"
class Player
{
protected:
public:
    virtual void assignWeapon(Constant::Weapon weapon) = 0;
    virtual void mission() = 0;
    virtual ~Player(){};
};

#endif