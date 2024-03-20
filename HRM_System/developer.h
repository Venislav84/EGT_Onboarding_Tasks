#ifndef DEVELOPER_H
#define DEVELOPER_H
#include <iostream>
#include "employee.h"
using namespace std;

//create a derived class
class Developer:public Employee
{
public:
    // constructor
    Developer(string, int, double, bool);

    // setters
    void setIsUnderstandCpp(bool);

    // getters
    bool getIsUnderstandCpp() const;

    //function override
    void display() override;

private:
    // Developer attributtes
    bool _isUnderstandCpp;

};

#endif // DEVELOPER_H
