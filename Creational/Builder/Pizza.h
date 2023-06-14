#ifndef PIZZA_H
#define PIZZA_H
#include <string>

class Pizza
{
private:
    std::string dough;
    std::string base;
    std::string topping;
    std::string sauce;
    std::string bake;
    std::string cheese;

public:
    Pizza();
    ~Pizza();
    void setDough(std::string dough);
    void setBase(std::string base);
    void setTopping(std::string topping);
    void setSauce(std::string sauce);
    void setBake(std::string bake);
    void setCheese(std::string cheese);
    void showPizza();
};

#endif
