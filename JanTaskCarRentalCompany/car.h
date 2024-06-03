#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>


class Car
{
public:
    // create a constructor
    Car(std::string make, std::string model, int year, double rentalPricePerDay);

    // setters
    void setMake(std::string make);
    void setModel(std::string model);
    void setYear(int year);
    void setRentalPricePerDay(double rentalPricePerDay);

private:
    std::string m_make;
    std::string m_model;
    int m_year;
    double m_rentalPricePerDay;
};

#endif // CAR_H
