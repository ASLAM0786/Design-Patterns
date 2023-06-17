#ifndef RED_H
#define RED_H

#include "Color.h"

class Red : public Color
{
public:
    Red();
    ~Red();
    void handleReq() override;
};

#endif