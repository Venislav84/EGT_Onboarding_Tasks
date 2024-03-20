#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include "employee.h"
#include "developer.h"
#include "manager.h"
#include "hr_department.h"


int main(int argc, char *argv[])
{
    //create employees
    Developer developer1("developer1", 3, 2000.5, false);
    Developer developer2("developer2", 6, 2100.5, false);
    Developer developer3("developer3", 9, 2200.5, true);
    Developer developer4("developer4", 11, 2300.5, true);

    Manager manager1("manager1", 5, 2358.7, 8);
    Manager manager2("manager2", 9, 2600.3, 4);
    Manager manager3("manager3", 14, 2700.0, 7);
    Manager manager4("manager4", 23, 3300.5, 20);

    // create a vector of employee
    vector<Employee*> employeesVec;

    employeesVec.push_back(&developer1);
    employeesVec.push_back(&developer2);
    employeesVec.push_back(&developer3);
    employeesVec.push_back(&developer4);
    employeesVec.push_back(&manager1);
    employeesVec.push_back(&manager2);
    employeesVec.push_back(&manager3);
    employeesVec.push_back(&manager4);

    //

    //remove employees with intership under 3 months
    // for (int i = 0; i < employeesVec.size(); ++i) {
    //     if(employeesVec[i]->getIntership() < 3){
    //         employeesVec[i;

    //         // remove
    //     }
    // }

    // remove employees with intership under 3 months
    // for (int i = 0; i < employeesVec.size(); ++i) {
    //     if(employeesVec[i]->getIntership() < 3){
    //         Employee* temp = employeesVec[i];
    //         employeesVec[i] = employeesVec.back(); // the current employee go back
    //         employeesVec.back() = temp;
            //         employeesVec.pop_back();
            //         // remove
            //     }
            // }

            // // increase salary with 1% for every one year work experience

            // for (int i = 0; i < employeesVec.size(); ++i) {
            //     if(employeesVec[i]->getIntership() > 12){
            //         salary = (getInterShip() % 12) * 0.01;
            //     }
            // }

    //add employees to department vector

    hr_department hrDep;
    for(int i = 0; i < employeesVec.size(); ++i){
        hrDep.addEmployee(employeesVec[i]);
    }

    hrDep.displayEmployee();

    return 0;

}
