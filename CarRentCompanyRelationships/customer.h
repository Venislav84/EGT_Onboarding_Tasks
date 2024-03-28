#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;

class Customer
{
public:
    Customer(string, int, int, RentalAgency*);

    string getCustomerName();
    string getPhone();
    string getAge();

     void rentCar();
    void returnCar();

private:
    string _customerName;
    int _phone;
    int _age;
    RentalAgency* rentalagency;

};

#endif // CUSTOMER_H
