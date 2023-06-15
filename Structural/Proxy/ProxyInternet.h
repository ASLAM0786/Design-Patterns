#ifndef PROXY_INTERNET_H
#define PROXY_INTERNET_H

#include "Internet.h"
#include <set>
#include "RealInternet.h"

class ProxyInternet : public Internet
{
private:
    Internet *internet = new RealInternet();
    static std::set<std::string> bannedSites;

public:
    ProxyInternet();
    ~ProxyInternet();
    void connectTo(std::string serverHost) override;
};

#endif