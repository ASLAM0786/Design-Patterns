#include "StereoOffCommand.h"
#include <iostream>

StereoOffCommand::StereoOffCommand(Stereo *stereo)
{
    this->stereo = stereo;
    std::cout << "StereoOffCommand Constructor Called!\n";
}

StereoOffCommand::~StereoOffCommand()
{
    std::cout << "StereoOffCommand Destructor Called!\n";
}

void StereoOffCommand::execute()
{
    stereo->off();
}