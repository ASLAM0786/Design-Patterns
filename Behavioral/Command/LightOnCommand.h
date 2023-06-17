#ifndef LIGHT_ON_COMMAND
#define LIGHT_ON_COMMAND

#include "Command.h"
#include "Light.h"
class LightOnCommand : public Command
{
private:
    Light *light;

public:
    LightOnCommand(Light *light);
    ~LightOnCommand();
    void execute() override;
};

#endif
