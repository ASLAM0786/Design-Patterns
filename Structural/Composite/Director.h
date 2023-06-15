#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Employee.h"
#include <string>
#include <vector>
class Director : public Employee
{
private:
    std::vector<Employee *> employeeList;

public:
    Director();
    ~Director();
    void showEmployeeDetails() override;
    void addEmployee(Employee *employee);
    void removeEmployee(Employee *employee);
};

#endif //