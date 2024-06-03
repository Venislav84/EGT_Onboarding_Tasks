#include "car.h"

// create a constructor
Car::Car(std::string make, std::string model, int year, double rentalPricePerDay) {
    setMake(make);
    setModel(model);
    setYear(year);
    setRentalPricePerDay(rentalPricePerDay);
}

// setters
void Car::setMake(std::string make) {
    m_make = make;
}

void Car::setModel(std::string model) {
    m_model = model;
}

void Car::setYear(int year) {
    m_year = year;
}

void Car::setRentalPricePerDay(double rentalPricePerDay) {
    m_rentalPricePerDay = rentalPricePerDay;
}

// getters
std::string Car::getMake() const{
    return m_make;
}

std::string Car::getModel() const{
    return m_model;
}

int Car::getYear() const{
    return m_year;
}

double Car::getRentalPricePerDay() const {
    return m_rentalPricePerDay;
}
