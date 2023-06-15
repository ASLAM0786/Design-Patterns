#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <string>

class Manager : public Employee
{
private:
    std::string name, position;
    long empId;

public:
    Manager(long empId, std::string name, std::string position);
    ~Manager();
    void showEmployeeDetails() override;
};

#endif //