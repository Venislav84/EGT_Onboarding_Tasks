#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

//Safe memory management - shared_ptr, unique_ptr, weak_ptr

//Easy:

//1. Define a shared_ptr to an integer and initialize it with a new integer object.
//2. Create a unique_ptr to a string and initialize it with a new string object.
//3. Create a weak_ptr to a double and check if it is expired.

int main()
{
    // EASY:
    // 1.
    shared_ptr<int> number = make_shared<int>(10);
    cout << *number << endl;

    // 2.
    unique_ptr<string> name = make_unique<string>("Dani");
    cout << *name << endl;

    // 3. Create a weak_ptr to a double and check if it is expired.

    weak_ptr<double> weakPtr1;
    // create an additional scope to hold object alive
    {
        shared_ptr<double> sharedPtr1 = make_shared<double>(3.14);
        weakPtr1 = sharedPtr1;

        // Check if the resource weak_ptr pointing to exists or not.
        if (weakPtr1.expired()) {
            std::cout << "weak_ptr is expired" << std::endl;
        }
        else {
            std::cout << "weak_ptr is not expired" << std::endl;
        }
    }

    // without additional scope the object is not alive
    if (weakPtr1.expired()) {
        std::cout << "weak_ptr is expired" << std::endl;
    }
    else {
        std::cout << "weak_ptr is not expired" << std::endl;
    }

    // MEDIUM
    // 1. Create a shared_ptr to a vector of integers and add elements to it.

    shared_ptr<vector<int>> vecNums = make_shared<vector<int>> ();

    vecNums->push_back(12);
    vecNums->push_back(15);
    vecNums->push_back(20);
    vecNums->push_back(25);

    for (const auto& num : *vecNums)
    {
        cout << num << endl;
    }

    //2. Create a unique_ptr to a custom class and call a method of the class using the pointer.

    // с една забележка че класа трябва да е извън main
    class MyClass {
    public:
       
        void myMethod() {
            cout << "Calling myMethod() in MyClass" << endl;
        }
    };
    // а unique_ptr трябва да бъде точно тук, вътре в main
    unique_ptr<MyClass> unqPtr (new MyClass);

    unqPtr->myMethod();


    // 3. Create a weak_ptr to an integer and assign it the value of the shared_ptr.

    weak_ptr<int> weakPtr2;

    shared_ptr<int> shrPtr2 = make_shared<int>(183);
    weakPtr2 = shrPtr2;

    // Ако ресурсът, посочен от weak_ptr, съществува, функцията lock() връща shared_ptr със собственост върху този ресурс.
    // Ако ресурсът не съществува, той връща конструиран по подразбиране shared_ptr.
    if (auto ptr = weakPtr2.lock())
    {
        std::cout << "Weak pointer value: " << *ptr << std::endl;
    }
    else {
        std::cout << "Weak pointer is expired" << std::endl;
    }

    return 0;
        
}


















