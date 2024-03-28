#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>

int main(int argc, char *argv[])
{

    Car* car1 = new Car("Volkswagen", "Passat", 2014, 80);
    Car* car2 = new Car("Mercedes", "Benz", 2019, 135);
    Car* car3 = new Car("Seat", "Toledo", 2020, 110);
    Car* car4 = new Car("Ford", "Mondeo", 2018, 100);
    Car* car3 = new Car("Renault", "Clio", 2021, 90);

    vector<Car*> carVec;
    carVec.push_back(&car1);
    carVec.push_back(&car2);
    carVec.push_back(&car4);
    carVec.push_back(&car5);

    // add cars to rental Agency
    rentalagency rentAgency;
    for(int i = 0; i < carVec.size(); ++i){
        rentAgency.addCar(carVec[i]);
    }

    rentAgency.showCar();
    //rentAgency.rentCar();
    //rentAgency.isAvailableCar();


    Customer* customer1 = new Customer("Ivan", 0896884432, 34);
    Customer* customer2 = new Customer("Miro", 0888359861, 42);
    Customer* customer3 = new Customer("Georgi", 0887005790, 29);

    RentalAgency* rentalagency("BestChoiceAuto", "Sofia");
    //customer1....rentCar(rentalagency);
    rentalagency.setCar(car1);

    //rentalagency....method()

    return 0;
}
