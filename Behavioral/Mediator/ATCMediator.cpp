#include "ATCMediator.h"
#include <iostream>
ATCMediator::ATCMediator()
{
    std::cout << "ATCMediator Constructor Called!!\n";
}

ATCMediator::~ATCMediator()
{
    std::cout << "ATCMediator Constructor Called!!\n";
}

void ATCMediator::registerRunway(Runway *runway)
{
    this->runway = runway;
}
void ATCMediator::registerFlight(Flight *flight)
{
    this->flight = flight;
}
bool ATCMediator::islandingOk()
{
    return land;
}
void ATCMediator::setLandingStatus(bool status)
{
    land = status;
}