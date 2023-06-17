#include "Flight.h"
#include <iostream>

Flight::Flight(IATCMediator *atcMediator)
{
    std::cout << "Flight Constructor Called!!\n";
}

Flight::~Flight()
{
    std::cout << "Flight destructor Called!!\n";
}

void Flight::land()
{
    if (atcMediator->islandingOk())
    {
        std::cout << "Successfully landed!!\n";
        atcMediator->setLandingStatus(true);
    }
    else
    {
        std::cout << "waiting for landing ...\n";
    }
}

void Flight::getReady()
{
    std::cout << "Ready for landing ...\n";
}