#include "employee.h"

Employee::Employee(string userName, int intership, double salary) {
    setUserName(userName);
    setIntership(intership);
    setSalary(salary);
}

//setters
void Employee::setUserName(string userName){
    this->_userName = userName;
}

void Employee::setIntership(int intership) {
    this->_intership = intership;
}

void Employee::setSalary(double salary) {
    this->_salary = salary;
}

//getters
string Employee::getUserName() const{
    return this->_userName;
}

int Employee::getIntership() const{
    return this->_intership;
}

double Employee::getSalary() const{
    return this->_salary;
}

void Employee::display(){
    cout << "User name: " << this->getUserName() << " Intership in months: " << this->getIntership()
         << " Salary: " << this->getSalary() << endl;
}
