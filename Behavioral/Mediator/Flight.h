#ifndef FLIGHT_H
#define FLIGHT_H

#include "Command.h"
#include "IATCMediator.h"
class Flight : public Command
{
private:
    IATCMediator *atcMediator;

public:
    Flight(IATCMediator *atcMediator);
    ~Flight();
    void land() override;
    void getReady();
};

#endif