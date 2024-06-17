// Task. 1 Compare Arrays again

//#include <iostream> 
//#include <vector> 
//#include <sstream>
//
//bool compareArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
//    if (arr1.size() != arr2.size()) { return false; }
//
//
//    for (int i = 0; i < arr1.size(); ++i) {
//        if (arr1[i] != arr2[i]) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    std::string line; std::vector<int> arr1, arr2; int num;
//
//
//    std::cout << "Enter the first array: ";
//    std::getline(std::cin, line);
//    std::istringstream iss1(line);
//    while (iss1 >> num) {
//        arr1.push_back(num);
//    }
//
//    std::cout << "Enter the second array: ";
//    std::getline(std::cin, line);
//    std::istringstream iss2(line);
//    while (iss2 >> num) {
//        arr2.push_back(num);
//    }
//
//    if (compareArrays(arr1, arr2)) 
//    {
//        std::cout << "equal"; 
//    } else 
//    { 
//        std::cout << "not equal "; 
//    }
//
//
//        return 0;
//    }


// -----------------------------------------------------------------------------------------

// Task. 2 Mathematical Expression

//#include <iostream> 
//#include <stack> 
//#include <string>
//
//bool checkBrackets(const std::string& expression) {
//    std::stack<char> brackets;
//
//
//    for (char c : expression) {
//        if (c == '(') {
//            brackets.push(c);
//        }
//        else if (c == ')') {
//            if (brackets.empty()) {
//                return false;
//            }
//            else {
//                brackets.pop();
//            }
//        }
//    }
//
//    return brackets.empty();
//}
//
//int main() {
//    std::string expression;
//
//
//    std::cout << "Enter a mathematical expression: ";
//    std::getline(std::cin, expression);
//
//    if (checkBrackets(expression)) {
//        std::cout << "Brackets are placed correctly." << std::endl;
//    }
//    else {
//        std::cout << "Brackets are not placed correctly." << std::endl;
//    }
//
//    return 0;
//}


// -----------------------------------------------------------------------------------------

// Task. 3 Title Case

//#include <iostream> 
//#include <string> 
//#include <cctype> 
//using namespace std;
//
//int main() {
//    string text; 
//    cout << "Enter a text: "; 
//    getline(cin, text);
//
//
//    bool capitalizeNext = true;
//
//    for (char& c : text) {
//        if (isalpha(c)) {
//            if (capitalizeNext) {
//                c = toupper(c);
//                capitalizeNext = false;
//            }
//            else {
//                c = tolower(c);
//            }
//        }
//        else {
//            capitalizeNext = true;
//        }
//    }
//
//    cout << "Capitalized text: " << text << endl;
//
//    return 0;
//}


// -----------------------------------------------------------------------------------------

// Task. 4 Replace All

//#include <iostream> 
//#include <string>
//
//int main() {
//    std::string text, find, replace;
//
//
//    std::cout << "Enter a line of text: ";
//    std::getline(std::cin, text);
//
//    std::cout << "Enter the 'find' string: ";
//    std::getline(std::cin, find);
//
//    std::cout << "Enter the 'replace' string: ";
//    std::getline(std::cin, replace);
//
//    size_t pos = 0;
//    while ((pos = text.find(find, pos)) != std::string::npos) {
//        text.replace(pos, find.length(), replace);
//        pos += replace.length();
//    }
//
//    std::cout << "Resulting text: " << text << std::endl;
//
//    return 0;
//}


// -----------------------------------------------------------------------------------------

// Task. 5 Invalid Input

//#include <iostream>
//#include <string>
//#include <sstream>
//using namespace std;
//
//int main() {
//    std::string line;
//    std::getline(std::cin, line);
//
//    std::istringstream iss(line);
//    int sum = 0;
//    int num;
//    while (iss >> num) {
//        sum += num;
//    }
//
//    std::cout << "Sum: " << sum << std::endl;
//
//    iss.clear();
//    iss.str(line);
//    std::string word;
//    while (iss >> word) {
//        // ne raboti all_of
//        if (std::all_of(word.begin(), word.end(), ::isalpha)) {
//            std::cout << word << " ";
//        }
//    }
//
//    return 0;
//}


// -----------------------------------------------------------------------------------------

// Task. 6 The Signal and the Noise
// ne raboti prawilno

//#include <iostream>
//#include <sstream>
//#include <string>
//#include <cctype>
//
//int main() {
//    std::string input;
//    std::cout << "Enter a sequence of non-negative integer numbers separated by spaces: ";
//    std::getline(std::cin, input);
//
//    std::stringstream ss(input);
//    int max = 0;
//    int number;
//
//    while (ss >> number) {
//        if (number > max) {
//            max = number;
//        }
//        // Clear the stream for the next number
//        ss.clear();
//    }
//
//    std::cout << "The maximum number is: " << max << std::endl;
//
//    return 0;
//}


//  ---------------------------------------------------------------------------------------- -

// Task. 7 The Noise and the Signal

//#include <iostream> 
//#include <string> 
//#include <cctype> 
//#include <algorithm>
//
//bool isNoise(char c) 
//{ 
//    return isdigit(c) || isalpha(c) || ispunct(c); 
//}
//
//std::string longestNoise(std::string input) {
//    int maxLength = 0; std::string longestNoise = "";
//
//
//    int currentLength = 0;
//    std::string currentNoise = "";
//
//    for (char c : input) {
//        if (isNoise(c)) {
//            currentLength++;
//            currentNoise += c;
//        }
//        else {
//            if (currentLength > maxLength) {
//                maxLength = currentLength;
//                longestNoise = currentNoise;
//            }
//            else if (currentLength == maxLength) {
//                longestNoise = std::min(longestNoise, currentNoise);
//            }
//
//            currentLength = 0;
//            currentNoise = "";
//        }
//    }
//
//    if (maxLength == 0) {
//        return "no noise";
//    }
//
//    return longestNoise;
//}
//
//int main() {
//    std::string input; 
//    std::cout << "Enter a number: "; 
//    std::cin >> input;
//
//
//    std::string result = longestNoise(input);
//    std::cout << "Longest noise: " << result << std::endl;
//
//    return 0;
//}

