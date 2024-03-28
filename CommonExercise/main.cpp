#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
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



// -------------------------------------------------------------------------------------------------------

// Task. 4 Да се напише функция, която по зададено цяло число n, n > 0, намира fib(n).
// Редицата от числата на Фибоначи: 1, 1, 2, 3, 5, 8, 13, 21...

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




















