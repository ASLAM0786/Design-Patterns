#ifndef IATC_MEDIATOR_H
#define IATC_MEDIATOR_H

#include "Runway.h"
#include "Flight.h"

class IATCMediator
{

public:
    virtual ~IATCMediator(){};
    virtual void registerRunway(Runway *runway) = 0;
    virtual void registerFlight(Flight *flight) = 0;
    virtual bool islandingOk() = 0;
    virtual void setLandingStatus(bool status) = 0;
};

#endif