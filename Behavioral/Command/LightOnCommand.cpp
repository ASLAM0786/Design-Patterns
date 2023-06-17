#include "LightOnCommand.h"
#include <iostream>

LightOnCommand::LightOnCommand(Light *light)
{
    this->light = light;
    std::cout << "LightOnCommand Constructor Called!\n";
}

LightOnCommand::~LightOnCommand()
{
    std::cout << "LightOnCommand Destructor Called!\n";
}

void LightOnCommand::execute()
{
    light->on();
}