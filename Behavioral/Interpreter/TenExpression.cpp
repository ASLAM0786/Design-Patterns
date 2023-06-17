#include "TenExpression.h"

#include <iostream>

TenExpression::TenExpression()
{
    std::cout << "TenExpression Constructor Called!\n";
}

TenExpression::~TenExpression()
{
    std::cout << "TenExpression Destructor Called!\n";
}

std::string TenExpression::one()
{
    return "X";
}
std::string TenExpression::four()
{
    return "XL";
}
std::string TenExpression::five()
{
    return "L";
}
std::string TenExpression::nine()
{
    return "XC";
}
int TenExpression::multiplier()
{
    return 10;
}