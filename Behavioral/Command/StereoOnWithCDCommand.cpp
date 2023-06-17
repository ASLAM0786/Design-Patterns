#include "StereoOnWithCDCommand.h"
#include <iostream>

StereoOnWithCDCommand::StereoOnWithCDCommand(Stereo *stereo)
{
    this->stereo = stereo;
    std::cout << "StereoOnWithCDCommand Constructor Called!\n";
}

StereoOnWithCDCommand::~StereoOnWithCDCommand()
{
    std::cout << "StereoOnWithCDCommand Destructor Called!\n";
}

void StereoOnWithCDCommand::execute()
{
    stereo->on();
    stereo->setCD();
    stereo->setVolume(10);
}