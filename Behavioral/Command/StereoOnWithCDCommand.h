#ifndef STEREO_ON_WITH_CD_COMMAND_H
#define STEREO_ON_WITH_CD_COMMAND_H

#include "Command.h"
#include "Stereo.h"

class StereoOnWithCDCommand : public Command
{
private:
    Stereo *stereo;

public:
    StereoOnWithCDCommand(Stereo *stereo);
    ~StereoOnWithCDCommand();
    void execute() override;
};

#endif
