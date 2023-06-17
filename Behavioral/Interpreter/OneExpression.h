#ifndef ONE_EXPRESSION_H
#define ONR_EXPRESSION_H

#include "Expression.h"

class OneExpression : public Expression
{

public:
    OneExpression(/* args */);
    ~OneExpression();
    std::string one() override;
    std::string four() override;
    std::string five() override;
    std::string nine() override;
    int multiplier() override;
};

#endif