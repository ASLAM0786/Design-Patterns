#ifndef WINDOWS_IMPLEMENTOR_H
#define WINDOWS_IMPLEMENTOR_H

#include "WindowImp.h"
class WindowsImplementor : public WindowImp
{
public:
    WindowsImplementor();
    ~WindowsImplementor();
    void drawOnMobile() override;
    void drawOnDesktop() override;
};

#endif //