/**
**Intent:
specifying the kind of objects to create using a prototypical instance
creating new objects by copying this prototype
**Problem:
Say you have an object, and you want to create an exact copy of it. How would you do it?
First, you have to create a new object of the same class. Then you have to go through all
the fields of the original object and copy their values over to the new object.. Since you
have to know the object’s class to create a duplicate, your code becomes dependent on that
class.
**Applicability:
1-Use the Prototype pattern when your code shouldn’t depend on the concrete classes of objects
that you need to copy.
2- Use the pattern when you want to reduce the number of subclasses that only differ in the
way they initialize their respective objects.
 **Pros:
1- You can clone objects without coupling to their concrete classes.
2-You can get rid of repeated initialization code in favor of cloning pre-built prototypes.
3-You can produce complex objects more conveniently.
4-You get an alternative to inheritance when dealing with configuration presets for complex objects.

 **Cons:
1-Cloning complex objects that have circular references might be very tricky.
 *?Its best suited for cloning an object of same type.
**C++ Problem
C++ has the support of polymorphic object destruction using its base class' virtual destructor.
Equivalent support for creation and copying of objects is missing as С++ doesn't support
virtual constructor and virtual copy constructors.
 */

#include "PrototypeFactory.h"

int main()
{

    std::cout << "Let's create a prototype1\n";
    PrototypeFactory *prototypeFactory = new PrototypeFactory();
    Prototype *prototype = prototypeFactory->CreatePrototype(Constant::classType::PROTOTYPE_1);
    prototype->Method(90);
    delete prototype;
    std::cout << "<!--------------------->>>>>>>>>>>>>>>----------!>\n";
    std::cout << "Let's create a prototype2\n";
    prototype = prototypeFactory->CreatePrototype(Constant::classType::PROTOTYPE_2);
    prototype->Method(10);
    delete prototype;
    return 0;
}