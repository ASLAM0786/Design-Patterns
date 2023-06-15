#ifndef TERRORIST_H
#define TERRORIST_H

#include "Player.h"

class Terrorist : public Player
{
private:
    Constant::Weapon weapon;
    const std::string TASK;

public:
    void assignWeapon(Constant::Weapon weapon) override;
    void mission() override;
    Terrorist();
    ~Terrorist();
};

#endif //