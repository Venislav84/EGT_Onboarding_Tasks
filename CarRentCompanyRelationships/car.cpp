#include "car.h"

Car::Car(string make, string model, int year, int rentPricePerDay, bool isRented)
{
    _make(make);
    _model(model);
    _year(year);
    _rentPricePerDay(rentPricePerDay);
    _isRented = false;
}

string Car::getMake()
{
    return _make;
}
string Car::getModel()
{
    return _model;
}
int Car::getYear()
{
    returm _year;
}
int Car::getRentPricePerDay()
{
    return _rentPricePerDay;
}

bool Car::getIsRented()
{
    return _isRented;
}


void Car::displayCar()
{
    cout << "Your car is: " << getMake() << " Model " << getModel() << " "
         << getYear() << " price is: " << getRentPricePerDay() << " lv." << endl;
}
