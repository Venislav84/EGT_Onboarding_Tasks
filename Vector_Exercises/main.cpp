#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
#include <vector>
#include <iomanip>
#include <stack>
#include <algorithm>
using namespace std;

//  Task.1 Write a program that takes two vectors of integers and compares them element by element.
//  Print equal if the vectors match, and not equal if the vectors don’t match.


// int main(int argc, char *argv[])
// {

//     vector<int> firstSequenceOfNumbers;
//     firstSequenceOfNumbers.push_back(17);
//     firstSequenceOfNumbers.push_back(3);
//     firstSequenceOfNumbers.push_back(9);
//     firstSequenceOfNumbers.push_back(14);
//     firstSequenceOfNumbers.push_back(25);

//     vector<int> secondSequenceOfNumbers;
//     secondSequenceOfNumbers.push_back(17);
//     secondSequenceOfNumbers.push_back(3);
//     secondSequenceOfNumbers.push_back(18);
//     secondSequenceOfNumbers.push_back(14);
//     secondSequenceOfNumbers.push_back(33);


//     for (int i = 0; i < firstSequenceOfNumbers.size(); ++i) {
//         if(firstSequenceOfNumbers[i] == secondSequenceOfNumbers[i])
//         {
//             cout << "Are equal" << endl;
//         } else
//         {
//             cout << "Are not equal" << endl;
//         }
//     }

//     return 0;
// }


// -------------------------------------------------------------------------------------------------------------------

//  Task.2. Write a program that finds the longest sequence of equal elements in an integer vector and then prints that sequence on the console.
//  If there is more than one such sequence, print the last one.

// int main() {
//     vector<int> numbers = {1, 7, 7, 7, 7, 2, 4, 128, 5, 5, 5, 5, 117, 117, 8, 8, 8, 12, 44, 5, 5, 5, 5};

//     int currentCount = 1;
//     int maxCount = 1;
//     int startIndex = 0;
//     int maxStartIndex = 0;

//     for (int i = 1; i < numbers.size(); i++) {
//         if (numbers[i] == numbers[i - 1]) {
//             currentCount++;
//         } else {
//             if (currentCount >= maxCount) {
//                 maxCount = currentCount;
//                 maxStartIndex = startIndex;
//             }
//             currentCount = 1;
//             startIndex = i;
//         }
//     }

//     if (currentCount >= maxCount) {
//         maxCount = currentCount;
//         maxStartIndex = startIndex;
//     }

//     cout << "Longest sequence of equal elements: ";
//     for (int i = maxStartIndex; i < maxStartIndex + maxCount; i++) {
//         cout << numbers[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }


//  -------------------------------------------------------------------------------------------------------------------------

//  Task. 3. Write a program that takes vector integer numbers and prints all numbers
//  which are larger than or equal to the mathematical average of the numbers in the vector.
//  The output should be printed on a single line.

// int main() {

//     double sum = 0;
//     double avg;
//     int num;
//     vector<int> numbers = {1, 7, 2, 4, 129, 52, 3, 117};

//     for (int i = 0; i < numbers.size(); ++i) {
//         num = numbers[i];
//         sum += num;
//     }

//     cout << "Sum: " << sum << endl;
//     cout << "Numbers count in vector: " << numbers.size() << endl;
//     avg = sum/ numbers.size();
//     cout << "Average: " << fixed << setprecision(2) << avg << endl;

//     for (int num : numbers) {
//         if (num >= avg) {
//             cout << num << " ";
//         }
//     }

//     return 0;
// }


//-----------------------------------------------------------------------------------

// Task. 4 Write a program that finds the most frequent number in a given sequence of numbers.
// In case of multiple numbers with the same maximal frequent, print all of them.

// int main() {
//     vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
//     int maxFreq = 0;
//     vector<int> mostFrequentNumbers;

//     for (int i = 0; i < numbers.size(); i++) {
//         int currentNum = numbers[i];
//         int currentFreq = 0;

//         for (int j = 0; j < numbers.size(); j++) {
//             if (numbers[j] == currentNum) {
//                 currentFreq++;
//             }
//         }

//         if (currentFreq > maxFreq) {
//             maxFreq = currentFreq;
//             mostFrequentNumbers.clear();
//             mostFrequentNumbers.push_back(currentNum);
//         } else if (currentFreq == maxFreq) {
//             mostFrequentNumbers.push_back(currentNum);
//         }
//     }

//     std::cout << "Most frequent number(s): ";
//     for (int num : mostFrequentNumbers) {
//         std::cout << num << " ";

//     }
//     std::cout << std::endl;

//     return 0;
// }


//-----------------------------------------------------------------------------------

// Task. 5 Write a program that takes vector of numbers and prints the product
// of each of its elements with allelements. E.g.
// for the vector {1, 7, 3}, the result would be {1, 7, 3, 7, 49, 21, 3, 21, 9}.

// int main() {

//     vector<int> numbers {1, 7, 3};

//     for (int i = 0; i < numbers.size(); ++i) {
//        int num1 = numbers[i];

//         for (int j = 0; j < numbers.size(); ++j) {
//             int num2 = numbers[j];
//             int num3 = num1 * num2;
//             cout << num3 << " ";
//         }


//     }

//    return 0;
// }



//-----------------------------------------------------------------------------------

// Task. 6 Write a program that reads a positive integer number and returns its square root
// (print the result as cout prints double numbers).
// The number will be entered with “noise” in it, i.e. there will be symbols that are not digits.
// These symbols should be ignored. The last symbol of the input of the number will always be.
// (dot) and there will be no other . (dot) in the number.

//int main() {

//     string input;
//     cout << "Enter a positive integer number or some text but with number inside: ";
//     cin >> input;

//     double number = 0;
//     for (char c : input) {
//         if (isdigit(c)) {
//             number = number * 10 + (c - '0');  // означава, че променливата "number"
//                                                // се актуализира чрез умножаване на текущата й стойност
//                                                // по 10 и след това добавяне на разликата
//                                                // между знака "c" и знака "0". Тази операция
//                                                // обикновено се използва за преобразуване на символ,
//                                                // представляващ цифра, в съответната му цифрова
//                                                // стойност и след това актуализиране на общото число,
//                                                // което се конструира.
//         }
//     }

//     double squareRoot = sqrt(number);
//     cout << "Square root of the number is: " << squareRoot << endl;

//     return 0;
// }



//  -----------------------------------------------------------------------------------------

// Task.7 At a certain train station, trains arrive on two tracks – Track A and Track B
// – and are merged onto a single track. Each railcar has a number, and in each train,
// the railcars are ordered by number – the front railcar has the lowest number,
// the back railcar has the highest number. railcars from Track A and Track B
// should be merged into the single track, then print the new train configuration,
// starting from the last railcar and finishing at the first railcar.
// Railcars are moved to start from the front to the back (i.e. you can only move the front car of a train).
// Each time you move a railcar from the parallel tracks A and B to the merge track,
// it pushes forward any railcars that are already there.
//        Input
//        - The first line of the console will contain the numbers of the railcars on Track A,
//        from the last railcar to the first railcar.
//        - The second line of the console will contain the numbers of the railcars on Track B,
//        from the last railcar to the first railcar.
//        Output
//        - If a railcar from Track A should be moved to the single track, print A. Otherwise, print B.
//        - On a separate line print the final configuration of the train (numbers separated by spaces,
//        representing the railcar numbers from the last railcar to the first).
//        The "input" railcars will always be correctly ordered (i.e. will be a line of
//        descending positive integer numbers).
//        The input will be such that the result will never have any railcars with the same numbers.


// int main() {
//     std::vector<std::pair<int, char>> trackA, trackB, singleTrack;

//     // Read input for Track A
//     int num;
//     while (std::cin >> num) {
//         trackA.push_back(std::make_pair(num, 'A'));
//         if (std::cin.get() == '\n') {
//             break;
//         }
//     }

//     // Read input for Track B
//     while (std::cin >> num) {
//         trackB.push_back(std::make_pair(num, 'B'));
//         if (std::cin.get() == '\n') {
//             break;
//         }
//     }

//     // merge vectors trackA and trackB in singleTrack
//     singleTrack.reserve(trackA.size() + trackB.size());
//     singleTrack.insert(singleTrack.end(), trackA.begin(), trackA.end());
//     singleTrack.insert(singleTrack.end(), trackB.begin(), trackB.end());

//     // cout << "Vector: ";
//     // for (int i = 0; i < singleTrack.size(); i++)
//     //     cout << singleTrack[i].first << " ";
//     // cout << endl;

//     // Sort the vector in descending order
//     sort(singleTrack.rbegin(), singleTrack.rend());   //rbeging()  reverse begin

//     // Print the reversed vector by first element - int
//     cout << "Sorted Vector in descending order:\n" << endl;
//     for (int i = 0; i < singleTrack.size(); i++)
//         cout << singleTrack[i].first << " ";
//     cout << endl;

//     //Print the reversed vector by second element - (char A or B)
//     for (int i = 0; i < singleTrack.size(); i++)
//         cout << singleTrack[i].second << " ";
//     cout << endl;



//     return 0;
// }


//  ---------------------------------------------  Task.2  Brackets   -------------------------------------


// Write a program that reads a single line from the console, containing brackets for a mathematical expression
// (only the brackets will appear in the input), and determine whether the brackets in the expression are correct.
// There are 3 types of brackets – {}, [] and (). {} can contain {}, [] and () brackets.
// Square brackets [] can contain [] and () brackets. Curved () brackets can contain only () brackets.
// Said simply, each type of brackets can contain the same type of brackets inside, or a "lower"
// type of brackets (() is lower than [] which is lower than {}). If a bracket of one type is opened,
// it needs to be closed before a bracket of another type is closed.
// Print valid if the brackets in the expression are valid and invalid if they are not.

        // #include <iostream>
        // #include <stack>
        // #include <string>

// bool isValidBrackets(const std::string& expression) {
//     std::stack<char> brackets;


//     for (auto& bracket : expression) {
//         if (bracket == '{' || bracket == '[' || bracket == '(') {
//             brackets.push(bracket);
//         }
//         else if (bracket == ')' && !brackets.empty() && brackets.top() == '(') {
//             brackets.pop();
//         }
//         else if (bracket == ']' && !brackets.empty() && brackets.top() == '[') {
//             brackets.pop();
//         }
//         else if (bracket == '}' && !brackets.empty() && brackets.top() == '}') {
//             brackets.pop();
//         }
//         else {
//             return false; // Invalid bracket encountered
//         }
//     }

//     return brackets.empty();
// }

// int main() {
//     std::string input;
//     std::cout << "Enter a expression with brackets: ";
//     // std::getline(std::cin, input);
//     std::cin >> input;

//     if (isValidBrackets(input)) {
//         std::cout << "valid" << std::endl;
//     }
//     else {
//         std::cout << "invalid" << std::endl;
//     }

//     return 0;
// }


//  4  ----------------------------------------------------------------

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// int convertToMinutes(string time)
// {
//     int hours = stoi(time.substr(0, 2));
//     int minutes = stoi(time.substr(2, 2));
//     return hours * 60 + minutes;
// }

// int main() {
//     int N;
//     cin >> N;


//     vector<string> busArrivalTimes(N);
//     for (int i = 0; i < N; i++) {
//         cin >> busArrivalTimes[i];
//     }

//     string trainDepartureTime;
//     cin >> trainDepartureTime;

//     int trainDepartureMinutes = convertToMinutes(trainDepartureTime);

//     int minWaitTime = INT_MAX;
//     int bestBusIndex = -1;

//     for (int i = 0; i < N; i++) {
//         int arrivalMinutes = convertToMinutes(busArrivalTimes[i]);
//         int waitTime = trainDepartureMinutes - arrivalMinutes;
//         if (waitTime >= 0 && waitTime < minWaitTime) {
//             minWaitTime = waitTime;
//             bestBusIndex = i + 1;
//         }
//     }

//     cout << bestBusIndex << endl;

//     return 0;
// }


// -----------------------------------------------------------------------------------------

// #include <iostream>
// #include <vector>
// #include <string>

// int main() {
//     int N;
//     std::cin >> N;

//     std::vector<int> busArrivalTimes(N);
//     for (int i = 0; i < N; i++) {
//         std::cin >> busArrivalTimes[i];
//     }

//     int trainDepartureTime;
//     std::cin >> trainDepartureTime;

//     int minWaitTime = 24 * 60; // initialize to a large value
//     int minWaitBusPosition = -1;

//     for (int i = 0; i < N; i++) {
//         int busTime = busArrivalTimes[i];

//         int busMinutes = (busTime / 100) * 60 + (busTime % 100);
//         int trainMinutes = (trainDepartureTime / 100) * 60 + (trainDepartureTime % 100);

//         int waitTime = (trainMinutes - busMinutes + 24 * 60) % (24 * 60); // calculate wait time in minutes

//         if (waitTime < minWaitTime) {
//             minWaitTime = waitTime;
//             minWaitBusPosition = i + 1; // position is 1-based
//         }
//     }

//     std::cout << minWaitBusPosition << std::endl;

//     return 0;
// }

















