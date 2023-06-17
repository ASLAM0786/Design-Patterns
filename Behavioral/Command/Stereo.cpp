#include "Stereo.h"
#include <iostream>

Stereo::Stereo()
{
    std::cout << "Stereo Constructor Called!\n";
}

Stereo::~Stereo()
{
    std::cout << "Stereo Destructor Called!\n";
}

void Stereo::on()
{
    std::cout << "Stereo is on ..\n";
}

void Stereo::off()
{
    std::cout << "Stereo is off ..\n";
}

void Stereo::setCD()
{
    std::cout << "Stereo is set for CD input";
}

void Stereo::setDVD()
{
    std::cout << "Stereo is set for DVD input";
}

void Stereo::setRadio()
{
    std::cout << "Stereo is set for Radio\n";
}

void Stereo::setVolume(int volume)
{
    std::cout << "Stereo is set for Volume: " << volume << "\n ";
}