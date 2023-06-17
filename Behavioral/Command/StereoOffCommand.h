#ifndef STEREO_OFF_COMMAND_H
#define STEREO_OFF_COMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOffCommand : public Command
{
private:
    Stereo *stereo;

public:
    StereoOffCommand(Stereo *stereo);
    ~StereoOffCommand();
    void execute() override;
};

#endif
