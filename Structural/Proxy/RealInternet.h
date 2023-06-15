#ifndef REAL_INTERNET_H
#define REAL_INTERNET_H

#include "Internet.h"

class RealInternet : public Internet
{
public:
    RealInternet();
    ~RealInternet();
    void connectTo(std::string serverHost) override;
};

#endif