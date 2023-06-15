#include "Director.h"
#include <iostream>
#include <algorithm>
Director::Director()
{
    std::cout << "Director Constructor called!\n";
}
void Director::showEmployeeDetails()
{
    for (Employee *emp : employeeList)
    {
        emp->showEmployeeDetails();
    }
}

void Director::addEmployee(Employee *employee)
{
    std::cout << "Director addEmployee function called!\n";
    employeeList.push_back(employee);
}

void Director::removeEmployee(Employee *employee) // TODO make it workable
{
    std::cout << "Director removeEmployee function  called!\n";
    // Find the employee to be removed
    // Employee *employeeToRemove = std::find(employeeList.begin(), employeeList.end(), employee);
    // Remove the employee from the list
    // employeeList.erase(employeeToRemove);

    // employeeList.erase(remove(employeeList.begin(), employeeList.end(), employee));
    // employeeList.erase(std::remove_if(employeeList.begin(), employeeList.end(), employee), employeeList.end());
}

Director::~Director()
{
    std::cout << "Director Destructor called!\n";
}