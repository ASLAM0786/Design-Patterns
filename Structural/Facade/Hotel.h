#ifndef HOTEL_H
#define HOTEL_H

#include "Constant.h"

class Hotel
{
private:
public:
    Hotel();
    virtual ~Hotel();
    virtual Constant::Menu getMenus() = 0;
};

#endif