#include "Light.h"
#include <iostream>
Light::Light()
{
    std::cout << "Light Constructor called!\n";
}

Light::~Light()
{
    std::cout << "Light Destructor called !\n";
}

void Light::on()
{
    std::cout << "Light is On...\n";
}

void Light::off()
{
    std::cout << "Light is Off..\n";
}