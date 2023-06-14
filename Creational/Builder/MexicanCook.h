#ifndef MEXICAN_COOK_H
#define MEXICAN_COOK_H

#include "Cook.h"
#include "Pizza.h"

class MexicanCook : public Cook
{
private:
    Pizza *pizza;

public:
    MexicanCook(/* args */);
    ~MexicanCook();
    void buildDough() override;
    void buildBase() override;
    void buildTopping() override;
    void buildSauce() override;
    void buildBake() override;
    void buildCheese() override;
    Pizza *getPizza() override;
    void showPizza();
};

#endif // MEXICAN_COOK_H