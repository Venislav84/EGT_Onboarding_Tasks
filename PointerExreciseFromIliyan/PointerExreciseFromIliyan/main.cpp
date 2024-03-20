//  *****************************************************************************************************
// 
//                             Tasks from Ilyan EGT
// 
//  *****************************************************************************************************

// Task1
//Write a program that asks the user to enter integers as inputs
//to be stored in the variables 'a' and 'b' respectively.
//There are also two integer pointers named ptrA and ptrB.
//Assign the values of 'a' and 'b' to ptrA and ptrB respectively, and display them.

//#include <iostream>
//using namespace std;
//
//int main() {
//  
//    int a, b;
//    cout << "Please enter a first number: ";
//    cin >> a;
//    cout << "Please enter a second number: ";
//    cin >> b;
//
//    int* ptrA = &a;
//    cout << "The address of variable a is: " << ptrA << endl;
//    cout << "The value of ptrA is: " << * ptrA << endl;
//
//    int* ptrB = &b;
//    cout << "The address of variable b is: " << ptrB << endl;
//    cout << "The value of ptrB is: " << * ptrB << endl;
//	return 0;
//
//}


//  *****************************************************************************************************

// Task 2
// 
//Write a C++ program to find the max of an integral data set. 
//The program will ask the user to input the number of data values in the set and each value.
//The program prints on screen a pointer that points to the max value.


//#include <iostream>
//using namespace std;
//
//int main() {
//	int n;
//	cout << "Enter the number of data values: ";
//	cin >> n;
//
//	int* data = new int[n];
//	for (int i = 0; i < n; i++) {
//		cout << "Enter data value " << i + 1 << ": ";
//		cin >> data[i];
//	}
//
//	int* maxPtr = &data[0];
//	for (int i = 1; i < n; i++) {
//		if (data[i] > *maxPtr) {
//			maxPtr = &data[i];
//		}
//	}
//
//	cout << "The maximum value is: " << *maxPtr << endl;
//	cout << "Pointer to the maximum value: " << maxPtr << endl;
//
//	return 0;
//}



//  *****************************************************************************************************

// Task 3
//
//Take input in variable and display same value by pointer.


//#include <iostream>
//using namespace std;
//
//int main() {
//
//	float num;
//	    cout << "Please enter a number: ";
//	    cin >> num;
//		cout << "Your entered a number is: " << num << endl;
//
//	float* ptrNum = &num;
//	   // cout << "The address of your entered number is: " << ptrNum << endl;
//	    cout << "The value of ptrNum is: " << * ptrNum << endl;
//
//	return 0;
//}

//  *****************************************************************************************************

// Task 4
//
// Given the string "A string." Print on one line the letter on the index 0,
// the pointer position and the letter t. undate the pointer to pointer +2. 
//Then, in another line print the pointer and the letters r and g of the string(using the pointer).


#include <iostream>
using namespace std;

int main() {

	char text[] = "A string.";
	char *ptrText = text;

	cout << text[0] << " | " << *ptrText << " | " << ptrText[3] << endl;
	ptrText += 2;
	cout << *ptrText << " | " << ptrText[2] << " | " << ptrText[5] << " | " << &ptrText;

	return 0;
}

//  *****************************************************************************************************

// Task 5
//
// What is the output of the following program?

//#include <iostream>
//using namespace std;
//
//int f(int x, int* py, int** ppz) {
//    int y, z;
//
//    // редът по-долу променя стойността на c на 5. Тук x остава незасегнат,
//    // тъй като x е копие на c и адресът на x е различен от c.
//    **ppz += 1;
//
//    // z става променен на 5;
//    z = **ppz;
//
//    // редът по-долу променя стойността на c на 7, х пак остава непроменен
//    *py += 2;
//    // оттук y става 7;
//    y = *py;
//    // а х се увеличава с 3;
//    x += 3;
//    // връща 7 + 7 + 5 = 19; 
//    return x + y + z;
//}
//
//int main() {
//    int c, * b, ** a;
//    c = 4;
//    b = &c;
//    a = &b;
//    cout << f(c, b, a);
//    return 0;
//}


//  *****************************************************************************************************

// Task 6
//
// What will be the output ?


//#include <iostream>
//using namespace std;
//
//int main() {
//float f = 10.5;
//float p = 2.5;
//float* ptr = &f; // ptr сочи към адреса на f
//(*ptr)++;        // взима стойността на f и я увеличава с 1 (f = 11,5)
//*ptr = p;        // на този поинтер му дай стойността на р (става 2,5)
//cout << *ptr << " | " << f << " | " << p;
// // 2,5 | 2.5 | 2.5
//return 0;
//}

//  *****************************************************************************************************

// Task 7
//
// Write a string search function with a declaration of
//char* strfind(const char* s, const char* f);
//which returns a pointer to first occurrence of s in f(and NULL otherwise).
//
//#include <iostream>
//using namespace std;
//
//char* strfind(const char* s, const char* f)
//{
//    const char* a;
//    const char* b;
//
//    b = f;
//
//    if (*b == 0) {
//        return (char*)s;
//    }
//
//    for (; *s != 0; s += 1) {
//        if (*s != *b) {
//            continue;
//        }
//
//        a = s;
//        while (true) {
//            if (*b == 0) {
//                return (char*)s;
//            }
//            if (*a++ != *b++) {
//                break;
//            }
//        }
//        b = f;
//    }
//
//    return NULL;
//}
//
//int main()
//{
//    const char* b = strfind("Fast and the furious movie trailer", "the");
//    cout << b << endl;
//    return 0;
//}