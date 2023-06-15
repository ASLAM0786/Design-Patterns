#ifndef INTERNET_H
#define INTERNET_H

#include <string>

class Internet
{

public:
    virtual ~Internet(){};
    virtual void connectTo(std::string serverHost) = 0;
};

#endif