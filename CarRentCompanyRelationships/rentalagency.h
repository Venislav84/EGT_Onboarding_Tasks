#ifndef RENTALAGENCY_H
#define RENTALAGENCY_H
#include <iostream>
using namespace std;

class RentalAgency
{
public:
    RentalAgency (string, string); //: customer(new Customer)

    string getName();
    string getLocation();

    void addCar(Car*);
    void showCar();
    void rentCar();
    void displayAvailableCars();
    double calculateRevenue();
    void trackPopularity();
private:

    string _name;
    string _location;
    vector<Car*> _cars;
};

#endif // RENTALAGENCY_H
