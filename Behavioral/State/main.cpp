
/**
**Intent:

**Problem:

**Solution:

**Statements:

**Applicability:
1-Use the State pattern when you have an object that behaves differently depending on its current state, the number of states is enormous, and the state-specific code changes frequently.
2- Use the pattern when you have a class polluted with massive conditionals that alter how the class behaves according to the current values of the class’s fields.
3-Use State when you have a lot of duplicate code across similar states and transitions of a condition-based state machine.

**Pros:
1-Single Responsibility Principle. Organize the code related to particular states into separate classes.
2-Open/Closed Principle. Introduce new states without changing existing state classes or the context.
3-Simplify the code of the context by eliminating bulky state machine conditionals.
**Cons:
1- Applying the pattern can be overkill if a state machine has only a few states or rarely changes.

*/
#include <iostream>
#include "ColorState.h"
#include "Red.h"
#include "Green.h"
#include "Yellow.h"
#include <windows.h>
int main()
{

    std::cout << "<!------State Design pattern---------!>\n";

    ColorState *coloState = new ColorState();
    coloState->SetState(new Yellow());
    coloState->handleReq();
    coloState->SetState(new Red());
    coloState->handleReq();
    coloState->SetState(new Green());
    coloState->handleReq();
    delete coloState;
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";
    Sleep(10);
    return 0;
}
