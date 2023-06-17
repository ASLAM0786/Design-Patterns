#ifndef YELLOW_H
#define YELLOW_H

#include "Color.h"

class Yellow : public Color
{
public:
    Yellow();
    ~Yellow();
    void handleReq() override;
};

#endif