#include "rentalagency.h"

RentalAgency::RentalAgency(string name, string location, car (nullptr_t))
{
    _name(name);
    _location(location);

}
void setCar(Car* car) {
    this->car = car;
}

string RentalAgency::getName()
{
    return _name;
}
string RentalAgency::getLocation()
{
    return _location;
}

void RentalAgency::addCar(Car* car)
{
    _cars.push_back(car);
}
void RentalAgency::showCar()
{
    for (auto car: _cars) {
        car->displayCar();
    }
    cout << endl;
}
void RentalAgency::rentCar()
{

}
double calculateRevenue() {
    double totalRevenue = 0;
    for (auto car : _cars) {
        if (car.isRented) {
            totalRevenue += car.rentPricePerDay;
        }
    }
    return totalRevenue;
}

void trackPopularity()
{
    cout << "Popularity of Car models" << endl;
    // Implement tracking popularity logic here
}

void displayAvailableCars() {
    std::cout << "Available Cars at " << name << " in " << location << ":" << std::endl;
    for (auto car : cars) {
        if (!car.isRented) {
            car.displayCar();
        }
    }
}



