#ifndef MAC_IMPLEMENTOR_H
#define MAC_IMPLEMENTOR_H

#include "WindowImp.h"
class MacImplementor : public WindowImp
{
public:
    MacImplementor();
    ~MacImplementor();
    void drawOnMobile() override;
    void drawOnDesktop() override;
};

#endif //