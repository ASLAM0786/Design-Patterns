#include "ProxyInternet.h"
#include <iostream>

std::set<std::string> ProxyInternet::bannedSites =
    {
        "abc.com",
        "def.com",
        "ijk.com",
        "lnm.com",
};

ProxyInternet::ProxyInternet()
{
    std::cout << "ProxyInternet constructor Called!\n";
}

ProxyInternet::~ProxyInternet()
{
    std::cout << "ProxyInternet Destructor Called!\n";
}

void ProxyInternet::connectTo(std::string serverHost)
{
    if (bannedSites.find(serverHost) != bannedSites.end())
    {
        std::cout << "Access Denied\n";
        // TODO throw an error
        // throw "Site is blocked!";
        // throw std::string("exception ! error: Site is blocked!");
        throw std::runtime_error("exception ! error: Site is blocked!");
    }
    internet->connectTo(serverHost);
}