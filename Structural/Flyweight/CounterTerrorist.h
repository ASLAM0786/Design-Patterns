#ifndef COUNTER_TERRORIST_H
#define COUNTER_TERRORIST_H

#include "Player.h"
class CounterTerrorist : public Player
{
private:
    Constant::Weapon weapon;
    const std::string TASK;

public:
    void assignWeapon(Constant::Weapon weapon) override;
    void mission() override;
    CounterTerrorist();
    ~CounterTerrorist();
};

#endif