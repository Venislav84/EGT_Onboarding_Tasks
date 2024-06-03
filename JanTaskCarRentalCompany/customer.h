#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <string>
using namespace std;

class Customer
{
public:
    Customer(string name, string phoneNumber, int age);

private:
    string m_name;
    string m_phoneNumber;
    int m_age;
};

#endif // CUSTOMER_H
