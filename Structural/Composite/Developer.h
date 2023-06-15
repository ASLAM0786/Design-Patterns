#ifndef DEVELOPER_H
#define DEVELOPER_H

#include "Employee.h"
#include <string>

class Developer : public Employee
{
private:
    std::string name, position;
    long empId;

public:
    Developer(long empId, std::string name, std::string position);
    ~Developer();
    void showEmployeeDetails() override;
};

#endif //