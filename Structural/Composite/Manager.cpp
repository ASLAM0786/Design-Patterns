#include "Manager.h"
#include <iostream>

Manager::Manager(long empId, std::string name, std::string position)
{
    std::cout << "Manager Constructor called!\n";
    this->empId = empId;
    this->name = name;
    this->position = position;
}

void Manager::showEmployeeDetails()
{
    std::cout << "EmpId: " << empId << " ";
    std::cout << "Name: " << name << " ";
    std::cout << "Position: " << position << "\n";
}

Manager::~Manager()
{
    std::cout << "Manager Destructor called!\n";
}
