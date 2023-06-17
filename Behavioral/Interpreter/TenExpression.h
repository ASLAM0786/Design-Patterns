#ifndef TEN_EXPRESSION_H
#define TEN_EXPRESSION_H

#include "Expression.h"

class TenExpression : public Expression
{

public:
    TenExpression(/* args */);
    ~TenExpression();
    std::string one() override;
    std::string four() override;
    std::string five() override;
    std::string nine() override;
    int multiplier() override;
};

#endif