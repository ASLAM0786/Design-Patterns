#ifndef GREEN_H
#define GREEN_H

#include "Color.h"

class Green : public Color
{
public:
    Green();
    ~Green();
    void handleReq() override;
};

#endif