#include "customer.h"

Customer::Customer(string customerName, int phone, int age, RentalAgency* rentalagency)
{
    _customerName(customerName);
    _phone(phone);
    _age(age);
    rentalagency(rentalagency);
}
string Customer::getCustomerName()
{
    return _customerName;
}
int Customer::getPhone()
{
    return _phone;
}
int Customer::getAge()
{
    return _age;
}
void rentCar(Car& car) {
    if (!car.isRented) {
        car.isRented = true;
        std::cout << name << " has rented the car: " << car.year << " " << car.make << " " << car.model << std::endl;
    }
    else {
        std::cout << "Car is already rented out." << std::endl;
    }
}

void returnCar(Car& car) {
    if (car.isRented) {
        car.isRented = false;
        std::cout << name << " has returned the car: " << car.year << " " << car.make << " " << car.model << std::endl;
    }
    else {
        std::cout << "Car is not currently rented." << std::endl;
    }
}

