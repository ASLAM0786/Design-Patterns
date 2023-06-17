
/**
**Intent:

**Problem:

**Solution:

**Statements:

**Applicability:

**Pros:

**Cons:

*/
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Context.h"
#include "Expression.h"
#include "OneExpression.h"
#include "TenExpression.h"
#include "HundredExpression.h"
#include "ThousandExpression.h"

int main()
{

    std::cout << "<!------State Design pattern---------!>\n";
    std::string roman; // = "MCMXXVIII";
    std::cin >> roman;
    Context *context = new Context(roman);

    //* Build the 'parse tree'
    std::list<Expression *> tree; // todo not , working
    tree.push_back(new ThousandExpression());
    tree.push_back(new HundredExpression());
    tree.push_back(new TenExpression());
    tree.push_back(new OneExpression());

    //* Interpret
    std::list<Expression *>::iterator it;
    for (it = tree.begin(); it != tree.end(); it++)
    {
        Expression *exp = *it; //* Dereference the iterator to get the pointer to the element
        exp->interpreter(context);
    }

    std::cout << roman << " = " << context->getOutput() << "\n";
    std::cout << "<!------------------>>>>>>>>>>>>-------------!>\n";
    return 0;
}
