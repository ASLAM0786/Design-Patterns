#include "LightOffCommand.h"
#include <iostream>

LightOffCommand::LightOffCommand(Light *light)
{
    this->light = light;
    std::cout << "LightOffCommand Constructor Called!\n";
}

LightOffCommand::~LightOffCommand()
{
    std::cout << "LightOffCommand Destructor Called!\n";
}

void LightOffCommand::execute()
{
    light->off();
}