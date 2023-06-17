#ifndef HUNDRED_EXPRESSION_H
#define HUNDRED_EXPRESSION_H

#include "Expression.h"

class HundredExpression : public Expression
{

public:
    HundredExpression(/* args */);
    ~HundredExpression();
    std::string one() override;
    std::string four() override;
    std::string five() override;
    std::string nine() override;
    int multiplier() override;
};

#endif