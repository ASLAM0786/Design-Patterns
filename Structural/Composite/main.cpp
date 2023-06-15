/**
**Intent:
1-The intent of this pattern is to compose objects into tree structures to represent part-whole hierarchies.
2-Composite lets clients treat individual objects and compositions of objects uniformly.
**Problem:

**Solution:

**Applicability:
1- Use the Composite pattern when you have to implement a tree-like object structure.
2-Use the pattern when you want the client code to treat both simple and complex elements uniformly.
**Pros:
1-You can work with complex tree structures more conveniently: use polymorphism and recursion to your advantage.
2-Open/Closed Principle. You can introduce new element types into the app without breaking the existing code, which now works with the object tree
 **Cons:
1- It might be difficult to provide a common interface for classes whose functionality differs too much. In certain scenarios, you’d need to overgeneralize the component interface, making it harder to comprehend.
*?A C++ program to demonstrate working of Composite Design Pattern with example of a company with different employee details
 */
#include <iostream>

#include "Developer.h"
#include "Manager.h"
#include "Director.h"

int main()
{

    std::cout << "<!------Composite Design pattern---------!>\n";
    Developer *developer1 = new Developer(12345, "Aslam Ansari", "Senior Software Engineer");
    Developer *developer2 = new Developer(12344, "Eshant Monga", "Software Engineer");

    Director *engDirector = new Director();
    engDirector->addEmployee(developer1);
    engDirector->addEmployee(developer2);

    Manager *manager1 = new Manager(1000, "Gauravan Bhat", "Senior Manager");
    Manager *manager2 = new Manager(1000, "Bikramjit", " Manager");

    Director *managerDirector = new Director();
    managerDirector->addEmployee(manager1);
    managerDirector->addEmployee(manager2);

    Director *director = new Director();
    director->addEmployee(engDirector);
    director->addEmployee(managerDirector);
    director->showEmployeeDetails();
    std::cout
        << "<!------------------>>>>>>>>>>>>-------------!>\n";

    return 0;
}