#ifndef ATC_MEDIATOR_H
#define ATC_MEDIATOR_H

#include "IATCMediator.h"

class ATCMediator : public IATCMediator
{
private:
    Flight *flight;
    Runway *runway;
    bool land;

public:
    ATCMediator();
    ~ATCMediator();
    void registerRunway(Runway *runway) override;
    void registerFlight(Flight *flight) override;
    bool islandingOk() override;
    void setLandingStatus(bool status) override;
};

#endif