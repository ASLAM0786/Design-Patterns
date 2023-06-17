#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "Context.h"
class Expression
{
public:
    virtual ~Expression(){};

    virtual std::string one() = 0;
    virtual std::string four() = 0;
    virtual std::string five() = 0;
    virtual std::string nine() = 0;
    virtual int multiplier() = 0;

    void interpreter(Context *context)
    {
        if (context->getInput().length() == 0)
        {
            return;
        }
        if (context->getInput().substr(0, nine().length()) == nine())
        {
            context->setOuput(context->getOutput() + (9 * multiplier()));
            context->setInput(context->getInput().substr(2));
        }

        else if (context->getInput().substr(0, four().length()) == four())
        {
            context->setOuput(context->getOutput() + (4 * multiplier()));
            context->setInput(context->getInput().substr(2));
        }
        else if (context->getInput().substr(0, five().length()) == five())
        {
            context->setOuput(context->getOutput() + (5 * multiplier()));
            context->setInput(context->getInput().substr(1));
        }
        else if (context->getInput().substr(0, one().length()) == one())
        {
            context->setOuput(context->getOutput() + (1 * multiplier()));
            context->setInput(context->getInput().substr(1));
        }
    };
};
#endif