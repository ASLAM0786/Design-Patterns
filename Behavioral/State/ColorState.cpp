#include "ColorState.h"

#include <iostream>

ColorState::ColorState()
{
    std::cout << "ColorState Constructor called!\n";
}

ColorState::~ColorState()
{
    std::cout << "ColorState Destructor called!\n";
    delete color;
}

void ColorState::SetState(Color *color)
{
    this->color = color;
}

void ColorState::handleReq()
{
    color->handleReq();
}