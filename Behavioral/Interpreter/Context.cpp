#include "Context.h"
#include <iostream>

Context::Context(std::string input)
{
    std::cout << "Context Constructor Called!\n";
    this->input = input;
}

Context::~Context()
{
    std::cout << "Context Destructor Called!\n";
}

std::string Context::getInput()
{
    return input;
}
int Context::getOutput()
{
    return output;
}

void Context::setInput(std::string input)
{
    this->input = input;
}

void Context::setOuput(int output)
{
    this->output = output;
}