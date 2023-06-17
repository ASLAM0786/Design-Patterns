#include "OneExpression.h"

#include <iostream>

OneExpression::OneExpression()
{
    std::cout << "OneExpression Constructor Called!\n";
}

OneExpression::~OneExpression()
{
    std::cout << "OneExpression Destructor Called!\n";
}

std::string OneExpression::one()
{
    return "I";
}
std::string OneExpression::four()
{
    return "IV";
}
std::string OneExpression::five()
{
    return "V";
}
std::string OneExpression::nine()
{
    return "IX";
}
int OneExpression::multiplier()
{
    return 1;
}