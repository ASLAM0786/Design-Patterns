#include "ThousandExpression.h"

#include <iostream>

ThousandExpression::ThousandExpression()
{
    std::cout << "ThousandExpression Constructor Called!\n";
}

ThousandExpression::~ThousandExpression()
{
    std::cout << "ThousandExpression Destructor Called!\n";
}

std::string ThousandExpression::one()
{
    return "M";
}
std::string ThousandExpression::four()
{
    return "";
}
std::string ThousandExpression::five()
{
    return "";
}
std::string ThousandExpression::nine()
{
    return "";
}
int ThousandExpression::multiplier()
{
    return 1000;
}