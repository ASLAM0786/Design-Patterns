
/**
**Intent:
- encapsulate a request in an object
- allows the parameterization of clients with different requests
- allows saving the requests in a queue
**Problem:

**Solution:

**Statements:

**Applicability:
1- Use the Command pattern when you want to parametrize objects with operations.
2- Use the Command pattern when you want to queue operations, schedule their execution, or execute them remotely.
3-Use the Command pattern when you want to implement reversible operations.

**Pros:
1-Single Responsibility Principle. You can decouple classes that invoke operations from classes that perform these operations.
2-Open/Closed Principle. You can introduce new commands into the app without breaking existing client code.
3-You can implement undo/redo.
4-You can implement deferred execution of operations.
5-You can assemble a set of simple commands into a complex one.

**Cons:
1-The code may become more complicated since you’re introducing a whole new layer between senders and receivers.
*/
#include <iostream>
#include <list>
#include <vector>
#include <string>

#include "SimpleRemoteControl.h"
#include "Light.h"
#include "Stereo.h"
#include "LightOnCommand.h"
#include "StereoOffCommand.h"
#include "StereoOnWithCDCommand.h"

int main()
{

    std::cout << "<!------Command Design pattern---------!>\n";
    // TODO RemoteControlTest
    SimpleRemoteControl *remote = new SimpleRemoteControl();
    Light *light = new Light();
    Stereo *stereo = new Stereo();
    remote->setCommand(new LightOnCommand(light));
    remote->buttonWasPressed();
    remote->setCommand(new StereoOnWithCDCommand(stereo));
    remote->buttonWasPressed();
    remote->setCommand(new StereoOffCommand(stereo));
    remote->buttonWasPressed();
    delete light;
    delete stereo;
    delete remote;
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";
    return 0;
}
