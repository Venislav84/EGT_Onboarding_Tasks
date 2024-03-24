#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include "employee.h"
using namespace std;

// create a direved class Manager
class Manager : public Employee
{
public:
    Manager(string, int, double, int);

    //setters
    void setCountOfEmployee(int);

    //getters
    int getCountOfEmployee() const;

    //function override
    void display() override;

private:
    //Manager attributes
    int _countOfEmployee;
};

#endif // MANAGER_H
