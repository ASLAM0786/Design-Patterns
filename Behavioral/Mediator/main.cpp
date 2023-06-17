
/**
**Intent:
Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.
Design an intermediary to decouple many peers.
Promote the many-to-many relationships between interacting peers to "full object status".
**Problem:

**Solution:

**Statements:

**Applicability:
1-Use the Mediator pattern when it’s hard to change some of the classes because they are tightly coupled to a bunch of other classes.
2-Use the pattern when you can’t reuse a component in a different program because it’s too dependent on other components.
3- Use the Mediator when you find yourself creating tons of component subclasses just to reuse some basic behavior in various contexts.

**Pros:
1-Single Responsibility Principle. You can extract the communications between various components into a single place, making it easier to comprehend and maintain.
2-Open/Closed Principle. You can introduce new mediators without having to change the actual components.
3-You can reduce coupling between various components of a program.
4-You can reuse individual components more easily.

**Cons:
Over time a mediator can evolve into a God Object.

*?Air Traffic Design Sample
*/
#include <iostream>
#include "ATCMediator.h"
int main()
{

    std::cout << "<!------State Design pattern---------!>\n";
    IATCMediator *atcMediator = new ATCMediator();
    Flight *flight = new Flight(atcMediator);
    Runway *runway = new Runway(atcMediator);
    atcMediator->registerFlight(flight);
    atcMediator->registerRunway(runway);
    flight->getReady();
    flight->land();
    runway->land();
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";
    return 0;
}
