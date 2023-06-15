#include "Terrorist.h"

Terrorist::Terrorist() : TASK("PLANT A BOMB")
{
    std::cout << "Terrorist Constructor Called!\n";
}

Terrorist::~Terrorist()
{
    std::cout << "Terrorist Destructor Called!\n";
}

void Terrorist::assignWeapon(Constant::Weapon weapon)
{
    this->weapon = weapon;
}

void Terrorist::mission()
{
    std::cout << "Terrorist with weapon " << weapon << "|"
              << " Task is " << TASK << "\n";
}