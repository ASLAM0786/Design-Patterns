#include "CounterTerrorist.h"

CounterTerrorist::CounterTerrorist() : TASK("DIFFUSE BOMB")
{
    std::cout << "CounterTerrorist Constructor Called!\n";
}

CounterTerrorist::~CounterTerrorist()
{
    std::cout << "CounterTerrorist Destructor Called!\n";
}

void CounterTerrorist::assignWeapon(Constant::Weapon weapon)
{
    this->weapon = weapon;
}

void CounterTerrorist::mission()
{
    // TODO weapon should be printed as string values(key's) not its value.
    std::cout << "CounterTerrorist with weapon " << weapon << "|"
              << " Task is " << TASK << "\n";
}