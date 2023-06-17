#include "SimpleRemoteControl.h"
#include <iostream>

SimpleRemoteControl::SimpleRemoteControl()
{
    std::cout << "SimpleRemoteControl Constructor Called!\n";
}

SimpleRemoteControl::~SimpleRemoteControl()
{
    std::cout << "SimpleRemoteControl Destructor Called!\n";
}

void SimpleRemoteControl::setCommand(Command *command)
{
    this->command = command;
}

void SimpleRemoteControl::buttonWasPressed()
{
    command->execute();
}