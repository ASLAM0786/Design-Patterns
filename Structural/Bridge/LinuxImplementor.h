#ifndef LINUX_IMPLEMENTOR_H
#define LINUX_IMPLEMENTOR_H

#include "WindowImp.h"
class LinuxImplementor : public WindowImp
{
public:
    LinuxImplementor();
    ~LinuxImplementor();
    void drawOnMobile() override;
    void drawOnDesktop() override;
};

#endif //