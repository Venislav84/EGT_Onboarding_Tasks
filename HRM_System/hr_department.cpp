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
            Employee* temp = _employees[i];
            _employees[i] = _employees.back(); // the current employee go back
            _employees.back() = temp;
            _employees.pop_back();
            // remove
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
