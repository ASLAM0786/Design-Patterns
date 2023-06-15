#include "Developer.h"
#include <iostream>

Developer::Developer(long empId, std::string name, std::string position)
{
    std::cout << "Developer Constructor called!\n";
    this->empId = empId;
    this->name = name;
    this->position = position;
}

void Developer::showEmployeeDetails()
{
    std::cout << "EmpId: " << empId << " ";
    std::cout << "Name: " << name << " ";
    std::cout << "Position: " << position << "\n";
}

Developer::~Developer()
{
    std::cout << "Developer Destructor called!\n";
}
