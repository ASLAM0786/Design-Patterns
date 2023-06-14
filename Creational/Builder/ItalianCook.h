#ifndef ITALIAN_COOK_H
#define ITALIAN_COOK_H

#include "Cook.h"
#include "Pizza.h"

class ItalianCook : public Cook
{
private:
    Pizza *pizza;

public:
    ItalianCook(/* args */);
    ~ItalianCook();
    void buildDough() override;
    void buildBase() override;
    void buildTopping() override;
    void buildSauce() override;
    void buildBake() override;
    void buildCheese() override;
    Pizza *getPizza() override;
    void showPizza();
};

#endif // ITALIAN_COOK_H