#ifndef LIGHT_OFF_COMMAND
#define LIGHT_OFF_COMMAND

#include "Command.h"
#include "Light.h"
class LightOffCommand : public Command
{
private:
    Light *light;

public:
    LightOffCommand(Light *light);
    ~LightOffCommand();
    void execute() override;
};

#endif
