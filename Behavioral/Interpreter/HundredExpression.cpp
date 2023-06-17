#include "HundredExpression.h"

#include <iostream>

HundredExpression::HundredExpression()
{
    std::cout << "HundredExpression Constructor Called!\n";
}

HundredExpression::~HundredExpression()
{
    std::cout << "HundredExpression Destructor Called!\n";
}

std::string HundredExpression::one()
{
    return "C";
}
std::string HundredExpression::four()
{
    return "CD";
}
std::string HundredExpression::five()
{
    return "D";
}
std::string HundredExpression::nine()
{
    return "CM";
}
int HundredExpression::multiplier()
{
    return 100;
}