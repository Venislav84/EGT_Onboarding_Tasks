#ifndef CAR_H
#define CAR_H
#include<iostream>
using namespace std;


class Car
{
public:
    Car(string, string, int, int, bool);

    string getMake();
    string getModel();
    int getYear();
    int getRentPricePerDay();
    bool getIsRented();

    virtual void displayCar();

private:
    string _make;
    string _model;
    int _year;
    int _rentPricePerDay;
    bool _isRented;
};

#endif // CAR_H
