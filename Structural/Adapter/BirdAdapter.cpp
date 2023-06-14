#include "BirdAdapter.h"
#include <iostream>

BirdAdapter::BirdAdapter(Bird *bird)
{
    std::cout << "BirdAdapter Constructor Called!\n";
    this->bird = bird;
}
BirdAdapter::~BirdAdapter()
{
    std::cout << "BirdAdapter Destructor Called!\n";
    delete bird;
}
void BirdAdapter::squeak()
{
    std::cout << "Squeak Method called , but sound will be come\n";
    bird->makeSound();
}