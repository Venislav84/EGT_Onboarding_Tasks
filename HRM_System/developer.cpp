#include "developer.h"

Developer::Developer(string userName, int intership, double salary, bool isUnderstandCpp)
    :Employee(userName, intership, salary)
{
    setIsUnderstandCpp(isUnderstandCpp);
}

//setters
void Developer::setIsUnderstandCpp(bool isUnderstandCpp){
    this->_isUnderstandCpp = isUnderstandCpp;
}

//getters
bool Developer::getIsUnderstandCpp() const {
    return this->_isUnderstandCpp;
}

// display function for developer
void Developer::display(){
    Employee::display();
    cout << "Is understand C++: " << this->getIsUnderstandCpp() << endl;
}





