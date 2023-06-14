/**
**Intent:
The intent of this pattern is to decouple abstraction from implementation so that the two can
vary independently.

**Problem:
Say you have a geometric Shape class with a pair of subclasses: Circle and Square. You want to
extend this class hierarchy to incorporate colors, so you plan to create Red and Blue shape
subclasses. However, since you already have two subclasses, you’ll need to create four class
combinations such as BlueCircle and RedSquare.Adding new shape types and colors to the
hierarchy will grow it exponentially.
**Solution:
This problem occurs because we’re trying to extend the shape classes in two independent
dimensions: by form and by color. That’s a very common issue with class inheritance.
The Bridge pattern attempts to solve this problem by switching from inheritance to the object
composition.
**Applicability:
1- Use the Bridge pattern when you want to divide and organize a monolithic class that has several variants of some functionality (for example, if the class can work with various database servers).
2-Use the pattern when you need to extend a class in several orthogonal (independent) dimensions.
3-Use the Bridge if you need to be able to switch implementations at runtime.
**Pros:
1-You can create platform-independent classes and apps.
2-The client code works with high-level abstractions. It isn’t exposed to the platform details.
3-Open/Closed Principle. You can introduce new abstractions and implementations independently from each other.
4-Single Responsibility Principle. You can focus on high-level logic in the abstraction and on platform details in the implementation.

 **Cons:
You might make the code more complicated by applying the pattern to a highly cohesive class.
 */
#include <iostream>
#include "WindowImp.h"
#include "LinuxImplementor.h"
#include "WindowsImplementor.h"
#include "MacImplementor.h"
#include "MobileWindow.h"
#include "DesktopWindow.h"

int main()
{

    std::cout << "<!------Bridge Design pattern---------!>\n";
    WindowImp *imp = new LinuxImplementor();
    MobileWindow mobWindow(imp);
    mobWindow.draw();
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";
    imp = new MacImplementor();
    DesktopWindow deskWindow(imp);
    deskWindow.draw();
    return 0;
}