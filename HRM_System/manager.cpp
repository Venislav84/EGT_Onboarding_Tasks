#include "manager.h"

Manager::Manager(string userName, int intership, double salary, int countOfEmployee)
    :Employee(userName, intership, salary) {

    setCountOfEmployee(countOfEmployee);
}

//setters
void Manager::setCountOfEmployee(int countOfEmployee){

    this->_countOfEmployee = countOfEmployee;
}

//getters

int Manager::getCountOfEmployee() const{
    return this->_countOfEmployee;
}

// display function for manager
void Manager::display(){
    Employee::display();
    cout << "Count of Employee: " << this->getCountOfEmployee() << endl;
}





