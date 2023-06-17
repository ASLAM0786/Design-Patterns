#ifndef THOUSAND_EXPRESSION_H
#define THOUSAND_EXPRESSION_H

#include "Expression.h"

class ThousandExpression : public Expression
{

public:
    ThousandExpression(/* args */);
    ~ThousandExpression();
    std::string one() override;
    std::string four() override;
    std::string five() override;
    std::string nine() override;
    int multiplier() override;
};

#endif