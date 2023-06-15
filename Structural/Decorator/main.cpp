/**
**Intent:
The intent of this pattern is to add additional responsibilities dynamically to an object.
**Problem:
You want to add behavior or state to individual objects at run-time. Inheritance is not feasible because it is static and applies to an entire class.
**Solution:

**Applicability:
1-Use the Decorator pattern when you need to be able to assign extra behaviors to objects at runtime without breaking the code that uses these objects.
2-Use the pattern when it’s awkward or not possible to extend an object’s behavior using inheritance.

**Pros:
1-ou can extend an object’s behavior without making a new subclass.
2-You can add or remove responsibilities from an object at runtime.
3-You can combine several behaviors by wrapping an object into multiple decorators.
4-Single Responsibility Principle. You can divide a monolithic class that implements many possible variants of behavior into several smaller classes.
**Cons:
1-It’s hard to remove a specific wrapper from the wrappers stack.
2-It’s hard to implement a decorator in such a way that its behavior doesn’t depend on the order in the decorators stack.
3-The initial configuration code of layers might look pretty ugly.
*/
#include <iostream>
#include "Circle.h"
#include "RedShapeDecorator.h"
#include "Rectangle.h"
int main()
{

    std::cout << "<!------Decorator Design pattern---------!>\n";
    Shape *circle = new Circle();
    Shape *redCircle = new RedShapeDecorator(new Circle());
    Shape *redRectangle = new RedShapeDecorator(new Rectangle());
    circle->draw();       //* Circle with normal border
    redCircle->draw();    //*circle with Red border
    redRectangle->draw(); //* Rectangle with Red Border
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";

    return 0;
}