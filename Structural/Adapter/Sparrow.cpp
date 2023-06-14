#include "Sparrow.h"
#include <iostream>

Sparrow::Sparrow()
{
    std::cout << "Sparrow Constructor Called!\n";
}

Sparrow::~Sparrow()
{
    std::cout << "Sparrow Destructor Called!\n";
}

void Sparrow::fly()
{
    std::cout << "Flying\n";
}
void Sparrow::makeSound()
{
    std::cout << "chirp chirp\n";
}