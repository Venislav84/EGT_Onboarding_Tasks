#ifndef HR_DEPARTMENT_H
#define HR_DEPARTMENT_H
#include <vector>
#include "employee.h"

class hr_department
{
public:
    hr_department();

    //functions
    void addEmployee(Employee*);
    void deleteEmployee(string userName);
    void deleteEmployeeUnderThreeMonthsIntership();
    void increaseSalary();
    void displayEmployee();

private:
    vector<Employee*> _employees;
};

#endif // HR_DEPARTMENT_H
