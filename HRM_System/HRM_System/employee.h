#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(string, int, double);

    //setters
    void setUserName(string userName);
    void setIntership(int);
    void setSalary(double);

    //getters
    string getUserName() const;
    int getIntership() const;
    double getSalary() const;

    //function
    virtual void display();

private:
    //Employee attributes
    string _userName;
    int _intership;
    double _salary;
};

#endif // EMPLOYEE_H
