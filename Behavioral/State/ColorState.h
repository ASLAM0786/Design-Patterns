#ifndef COLOR_STATE_H
#define COLOR_STATE_H

#include "Color.h"
class ColorState
{
private:
    Color *color;

public:
    ColorState();
    ~ColorState();
    void SetState(Color *color);
    void handleReq();
};

#endif