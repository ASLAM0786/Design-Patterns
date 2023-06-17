#include "Runway.h"
#include <iostream>

Runway::Runway(IATCMediator *atcMediator)
{
    this->atcMediator = atcMediator;
    atcMediator->setLandingStatus(true);
    std::cout << "Runway Constructor Called!!\n";
}

Runway::~Runway()
{
    std::cout << "Runway destructor Called!!\n";
}

void Runway::land()
{
    std::cout << "Landing permission Granted!!\n";
    atcMediator->setLandingStatus(true);
}