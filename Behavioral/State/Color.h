#ifndef COLOR_H
#define COLOR_H

class Color
{
public:
    virtual ~Color(){};
    virtual void handleReq() = 0;
};

#endif