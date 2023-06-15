#include "RealInternet.h"
#include <iostream>
RealInternet::RealInternet()
{
    std::cout << "RealInternet constructor Called!\n";
}

RealInternet::~RealInternet()
{
    std::cout << "RealInternet Destructor Called!\n";
}

void RealInternet::connectTo(std::string serverHost)
{
    std::cout << "Connecting to : " << serverHost << "\n";
}