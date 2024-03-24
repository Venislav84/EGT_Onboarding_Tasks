#include "hr_department.h"
#include "employee.h"
#include "developer.h"
#include "manager.h"

hr_department::hr_department() {
}

//function that add new employee
void hr_department::addEmployee(Employee* employee) {
    // check if employees is add to department or not
    int i = 0;
    for (Employee* checkedEmployee : this->_employees) {
        if(checkedEmployee->getUserName() == employee->getUserName())
        {
            cout << "On index " << i << " there is an employee with the same name.\n";
            return;
        }
        i++;
    }
    this->_employees.push_back(employee);
}

// function that delete employee

void hr_department::deleteEmployee(string userName) {

    for(int i = 0; i < _employees.size(); i++)
    {
        if(_employees[i]->getUserName() == userName)
        {

            // using swap
            Employee* temp = _employees[i];
            _employees[i] = _employees.back(); // the current employee go back
            _employees.back() = temp;
            _employees.pop_back();
            // remove
        }
    }
}

//remove employees with intership under 3 months
void hr_department::deleteEmployeeUnderThreeMonthsIntership() {
    for (int i = 0; i < _employees.size(); i++)
    {
        if(_employees[i]->getIntership() < 3)
        {
             Employee* temp = _employees[i];
            _employees[i] = _employees.back(); // the current employee go back
            _employees.back() = temp;
            _employees.pop_back();
            --i;
    //          // auto it = find(_employees.begin(), _employees.end(),
    //          //                temp);
    //          // if (it != _employees.end()) {
    //          //     _employees.erase(it);
    //          // }
    //         // remove
        }
    }
    // for (auto it = _employees.end() - 1; it != _employees.begin() - 1; it--)
    //     if(it->getIntership()< 3)
    //         it = _employees.erase(it);
}

// increase salary with 1% for every one year work experience
void hr_department::increaseSalary() {
    for (int i = 0; i < _employees.size(); i++) {
        int intership = _employees[i]->getIntership();
        if(intership > 12){
            double increasePercent = (_employees[i]->getSalary() * ((intership % 12) * 0.01));
            int totalSalary = _employees[i]->getSalary() + increasePercent;
            _employees[i]->setSalary(totalSalary);
        }
    }
}

//display every employee
void hr_department::displayEmployee() {
    for (auto employee : this->_employees) {
        employee->display();
    }
    cout << endl;
}
