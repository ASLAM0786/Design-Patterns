/**
**Intent:
Separate the construction of a complex object from its representation so that the same
construction process can create different representations.
**Problem:
 Let us use an example of pizza. A pizza consist of a series of steps.first we make the dough,
 then we add the base,topping and sauce. Finally we bake the pizza.The Builder design pattern
 allow us to follow a clear process to create a complex object like a pizza, By breaking it down
  into smaller steps.
**Applicability:
1-using a telescoping constructor(constructor overloading)is not efficient
2-the same constructor process used to create representation of the complex object
3-Use the Builder to construct Composite trees or other complex objects.
 **Pros:
1-You can construct objects step-by-step, defer construction steps or run steps recursively.
2-You can reuse the same construction code when building various representations of products.
3-Single Responsibility Principle. You can isolate complex construction code from the business
 logic of the product.

 **Cons:
1-The overall complexity of the code increases since the pattern requires creating multiple
    new classes.
2-The number of lines of code increases at least to double in builder pattern, but the effort pays off in terms of design flexibility and much more readable code.
3-Requires creating a separate ConcreteBuilder for each different type of Product.

*? Design Pizza creation system for different Type of Pizza
 */
#include "ItalianCook.h"
#include "MexicanCook.h"
#include "HeadChef.h"
#include <iostream>
int main()
{
    Cook *cook = new ItalianCook();
    HeadChef *headChef = new HeadChef(cook);
    headChef->makePizza();
    // Pizza *pizza = cook->getPizza();
    // pizza->showPizza();
    cook->getPizza()->showPizza();
    std::cout << "!----------------->>>>>>>>>>>-------------!\n";

    cook = new MexicanCook();
    headChef = new HeadChef(cook);
    headChef->makePizza();
    // pizza = cook->getPizza();
    // pizza->showPizza();
    cook->getPizza()->showPizza();
    return 0;
}