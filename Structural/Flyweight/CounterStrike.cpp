
#include "CounterStrike.h"
#include <random>
Constant::playerType CounterStrike::getRandomPlayerType()
{
    std::random_device rd;  // a seed source for the random number engine
    std::mt19937 gen(rd()); // mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(0, 1);
    int number = distrib(gen);
    Constant::playerType playerType;
    switch (number)
    {
    case 0:
        playerType = Constant::playerType::TERRORIST;
        break;
    case 1:
        playerType = Constant::playerType::COUNTER_TERRORIST;
        break;
    default:
        break;
    }
    return playerType;
}

Constant::Weapon CounterStrike::getRandomWeapon()
{
    // srand(time(0));
    // int number = rand() % 4;
    std::random_device rd;  //* a seed source for the random number engine
    std::mt19937 gen(rd()); //* mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<> distrib(0, 1);
    int number = distrib(gen);
    Constant::Weapon weapon;
    switch (number)
    {
    case 0:
        weapon = Constant::Weapon::AK_47;
        break;
    case 1:
        weapon = Constant::Weapon::DESERT_EAGLE;
        break;
    case 2:
        weapon = Constant::Weapon::GUT_KNIFE;
        break;
    case 3:
        weapon = Constant::Weapon::MAVERICK;
        break;
    default:
        break;
    }

    return weapon;
}