#ifndef RUNWAY_H
#define RUNWAY_H

#include "Command.h"
#include "IATCMediator.h"
class Runway : public Command
{
private:
    IATCMediator *atcMediator;

public:
    Runway(IATCMediator *atcMediator);
    ~Runway();
    void land() override;
};

#endif