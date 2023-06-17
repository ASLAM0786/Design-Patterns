#ifndef STEREO_REMOTE_CONTROL_H
#define STEREO_REMOTE_CONTROL_H

#include "Command.h"

class SimpleRemoteControl
{
private:
    Command *command;

public:
    SimpleRemoteControl();
    ~SimpleRemoteControl();
    void setCommand(Command *command);
    void buttonWasPressed();
};

#endif
