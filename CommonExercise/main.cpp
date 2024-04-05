#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// Task. 1  Да се напише програма, която по въведени от клавиатурата цели числа x и p намира и извежда на екрана p-тата цифра на x.
// int main(int argc, char *argv[])
// {

//     int x, p;
//     cout << "Enter an integer x: ";
//     cin >> x;

//     cout << "Enter the position p of the digit you want to find: ";
//     cin >> p;

//     int digit = 0;
//     int temp = abs(x); // Take the absolute value of x to handle negative numbers

//     // Find the p-th digit of x
//     for (int i = 0; i < p; i++) {

//         digit = temp % 10;              // Give the last digit.
//         temp /= 10;                     // divide temp by 10..This removes the last digit of number temp since in int decimal part is omitted.
//     }

//     cout << "The " << p << "-th digit of " << x << " is: " << digit << endl;

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// Task. 2 Да се напише функция, която намира броя на цифрите в десетичния запис на дадено положително цяло число.

// int countDigits(int num) {
//     int count = 0;
//     while (num != 0) {
//         num = num / 10;
//         count++;
//     }
//     return count;
// }

// int main() {
//     int number;
//     cout << "Enter a positive integer: ";
//     cin >> number;

//     int numDigits = countDigits(number);
//     cout << "Number of digits in the decimal notation: " << numDigits << endl;

//     return 0;
// }


// -------------------------------------------------------------------------------------------------------

// Task. 3 Дадени са положителни, цели числа p и q. Да се напише програма, която проверява дали в интервала [p; q]
// съществува число, чиито цифри изпълняват условието: ц1 .... цn-3 < цn-2 > цn-1 < цn,
// където знаците се сменят алтернативно. Например: 1324, 1 < 3 > 2 < 4.

// int countDigits(int num) {
//     int count = 0;
//     while (num != 0) {
//         num = num / 10;
//         count++;
//     }
//     return count;
// }

// int compareDigits(int num1) {
//     int prevDigit = num1 % 10;
//     num1 /= 10;

//     while (num1 > 0) {
//         int currentDigit = num1 % 10;

//         if (currentDigit < prevDigit) {
//             std::cout << currentDigit << " < " << prevDigit << " " ;

//         }

//         else if (currentDigit > prevDigit) {
//             std::cout << currentDigit << " > " << prevDigit << " " ;
//         }

//         prevDigit = currentDigit;
//         num1 /= 10;
//     }
//     std::cout << std::endl;
// }

// int main() {

//     int p, q; std::cout << "Enter two positive integers p and q: "; std::cin >> p >> q;

//     int numDigits1 = countDigits(p);
//     int numDigits2 = countDigits(q);
//     cout << "Number of digits in p: " << numDigits1 << endl;
//     cout << "Number of digits in q: " << numDigits2 << endl;

//     for (int i = p; i <= q; i++) {
//         compareDigits(i);
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------------------------

// Task. 4 Да се напише функция, която по зададено цяло число n, n > 0, намира fib(n).
// Редицата от числата на Фибоначи: 1, 1, 2, 3, 5, 8, 13, 21...

//  ----------------   with for loop   -------------------------

// int main (){

//     int num;
//     int num1 = 0;
//     int num2 = 1;
//     int nextNums = 0;
//     cout << "Enter the number of terms: ";
//     cin >> num;
//     cout << "Fibonatchi sequence: ";

//     for (int i = 1; i <= num; ++i) {
//         if(i == 1){
//             cout << num1 << ", ";
//             continue;
//         }
//         if(i == 2){
//             cout << num2 << ", ";
//             continue;
//         }
//         nextNums = num1 + num2;
//         num1 = num2;
//         num2 = nextNums;

//         cout << nextNums << ", ";
//     }

//     return 0;
// }

//  ----------------   with recursion   -------------------------

// int fib(int n)
// {
//     if(n == 1 || n == 0)
//     {
//         return (n);
//     } else
//     {
//         return (fib(n-1) + fib(n-2));
//     }
// }

// int main() {

//     int i = 1; // За да стратира от 1 (по условие)
//     int n;
//     cout << "Please enter some positive integer number: " << endl;
//     cin >> n;
//     cout << "Fibonnaci squence: ";

//     while(i < n)
//     {
//         cout << " " << fib(i);
//         i++;
//     }

//     return 0;
// }


// -------------------------------------------------------------------------------------------------------

// Task. 5 Да се дефинира функция, която проверява дали едно положително цяло число е палиндром.

// bool checkPalindrome(int n)
// {
//     int reverse = 0;
//     int temp = n;
//     while (temp != 0) {
//         reverse = (reverse * 10) + (temp % 10);
//         temp = temp / 10;
//     }
//     return (reverse == n); // if it is true then it will return 1;
//                            // else if false it will return 0;
// }
// int main()
// {
//     int n;
//     cout << "Please enter some positive integer number: ";
//     cin >> n;
//     if (checkPalindrome(n) == 1) {
//         cout << "Yes\n";
//     }
//     else {
//         cout << "No\n";
//     }
//     return 0;
// }



// -------------------------------------------------------------------------------------------------------

// Task. 6 Да се напише функция, която по подаден символен низ връща неговият кодиран еквивалент,
// без да го запазва в текущия или в нов. Кодирането става по следният начин:
// След всеки символ се извежда броя на последователните му срещания.
// Ако символът се среща само веднъж, то броят не се извежда.

//             Пример:
//             Вход:  abbbccddddefg
//             Изход: ab3c2d4efg


// void printCountOfDuplicate(string text)
// {
//     for (int i = 0; i < text[i]; i++) {
//     // Counting occurrences of text[i]
//     int count = 1;
//     while (text[i] == text[i + 1]) {
//         i++;
//         count++;
//     }
//     if(count > 1){
//         cout << text[i] << count;
//     } else{
//         cout << text[i];
//     }
//   }

//     cout << endl;
// }


// int main()
// {
//     string inputText;
//     cout << "Please enter some string: ";
//     cin >> inputText;
//     printCountOfDuplicate(inputText);

//     return 0;
// }


// -------------------------------------------------------------------------------------------------------

// Task. 7 Да се напише функция, която по даден вектор от дробни числа намира индекса на последния негов елемент,
// който е равен на средното аритметично от неговите съседни елементи (крайните елементи имат само по един съседен).
// Ако такъв елемент не съществува, да се връща -1.

// int findIndex(std::vector<double> vec) {
//     for (int i = vec.size() - 1; i >= 0; i--) {
//         if(i == vec.size() - 1){
//             if(vec.at(i) == (vec.at(i - 1)/ 2)) {

//                 return i;
//             }
//         } else if(i == 0){
//             if(vec.at(i) == (vec.at(i + 1)/ 2)){

//                 return i;
//             }
//         // if (vec.size() == 2 && vec.at(i) == (vec.at(i + 1)/ 2)) {
//         //     return i;
//         // }
//         // if (vec.size() == 2 && vec.at(i) == (vec.at(i - 1)/ 2)) {
//         //     return i;
//         // }
//         } else
//         if (vec.at(i) == ((vec.at(i-1) + vec.at(i+1)) / 2)) {

//             return i;
//         }

//         }
//     return -1;
// }

// int main() {

//     std::vector<double> vec = {4.0, 2.0, 8.0, 6.0, 4.0, 3.0};

//     int index = findIndex(vec);

//     if (index != -1) {
//         std::cout << "Index of last element equal to the average of its neighbors: " << index << std::endl;
//     } else {
//         std::cout << "No such element exists in the vector." << std::endl;
//     }

//     return 0;
// }


// -------------------------------------------------------------------------------------------------------

// Task. 8 Да се дефинира функция, която приема две редици и извежда тяхното сечение, сортирано във възходящ ред.

// дефинирам функция intersection, която приема два масива от цели числа arr1 и arr2
// и извежда техните общи елементи (сечение) сортирани във възходящ ред.
// Функцията използва алгоритъма std::set_intersection, за да намери общите елементи и после ги сортира с функцията std::sort.
// В main функцията се тества функцията като се подадат два прости масива arr1 и arr2.

// void intersection(vector<int>& arr1, vector<int>& arr2) {
//     vector<int> result;

//     // set_intersection, за да намери общите елементи
//     set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), back_inserter(result));

//     sort(result.begin(), result.end());

//     for (int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// int main() {
//     vector<int> arr1 = {1, 2, 3, 4, 5};
//     vector<int> arr2 = {3, 4, 5, 6, 7};

//     intersection(arr1, arr2);

//     return 0;
// }




//  ------------------------------------------------------------------------------------------------------------

// Task.9  Да се напише клас Movie, който има член-данни име, година на премиера и дали филмът има Оскар.

// 9.1. Напишете функция, която извежда имената на всички филми, печелили Оскар;

// 9.2. Напишете функция filter, която приема вектор от филми (с име Netflix например).
// Нека тази функция извежда всички заглавия, излезли след 2010 година включително.




// class Movie
// {
// private:

//     string name;
//     int premiereYear;
//     bool hasOscar;

// public:

//     Movie(string name, int premiereYear, bool hasOscar)
//     : name(name), premiereYear(premiereYear), hasOscar(hasOscar){}

//     string getName(){return name;}
//     int getPremiereYear(){return premiereYear;}
//     bool hasWonOscar(){return hasOscar; }
// };


// void displayWinOscar(vector<Movie> movies)
// {
//     cout << "Movie win Oscar: " << endl;
//     for (int i = 0; i < movies.size(); ++i) {


//         if(movies[i].hasWonOscar()) {
//             cout << movies[i].getName() << endl;;
//         }

//     }
// }

// void filter(vector<Movie> movies)
// {
//     cout << "Movie after 2010: " << endl;
//     for (int i = 0; i < movies.size(); ++i) {


//         if(movies[i].getPremiereYear() >= 2010 && movies[i].getName() == "Netflix") {
//             cout << movies[i].getName() << endl;;
//         }

//     }
// }

// int main(){

//     vector<Movie> movies =
//     {
//         Movie("The Godfather", 1972, true),
//         Movie("Avatar", 2009, true),
//         Movie("Star Wars: The Force Awakens", 2015, false),
//         Movie("Inception", 2010, true),
//         Movie("Toy Story", 1995, false),
//         Movie("Home Alone", 1990, false),
//         Movie("Interstellar", 2014, true),
//         Movie("Netflix", 2014, false)
//     };

//     displayWinOscar(movies);
//     cout << endl;
//     filter(movies);

//     return 0;
// }












