/**
**Intent:
Adapter is a structural design pattern that allows objects with incompatible interfaces to collaborate.
**Problem:
Imagine that you’re creating a stock market monitoring app. The app downloads the stock data
from multiple sources in XML format and then displays nice-looking charts and diagrams for
the user.At some point, you decide to improve the app by integrating a smart 3rd-party
analytics library. But there’s a catch: the analytics library only works with data in JSON
format.
**Applicability:
1-Use the Adapter class when you want to use some existing class, but its interface isn’t
compatible with the rest of your code.
2- Use the pattern when you want to reuse several existing subclasses that lack some common
functionality that can’t be added to the superclass.
 **Pros:
1-Single Responsibility Principle. You can separate the interface or data conversion code from the primary business logic of the program.
2-Open/Closed Principle. You can introduce new types of adapters into the program without breaking the existing client code, as long as they work with the adapters through the client interface.

 **Cons:
1-The overall complexity of the code increases because you need to introduce a set of new interfaces and classes. Sometimes it’s simpler just to change the service class so that it matches the rest of your code.
 */

#include "BirdAdapter.h"
#include "Sparrow.h"
#include "PlasticToyDuck.h"
#include <iostream>

int main()
{
    std::cout << "<!-------------------->>>>>>>>>>>------------!>\n";
    Bird *bird = new Sparrow();
    bird->fly();
    bird->makeSound();
    std::cout << "<!-------------------->>>>>>>>>>>------------!>\n";
    ToyDuck *toyDuck = new PlasticToyDuck();
    toyDuck->squeak();
    std::cout << "<!-------------------->>>>>>>>>>>------------!>\n";
    ToyDuck *birdAdapter = new BirdAdapter(bird); // new Sparrow() can be passed as well
    birdAdapter->squeak();
    return 0;
}