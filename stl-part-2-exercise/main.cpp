#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

// Task.1  Write a program that takes a vector of strings and returns only those strings that contain a number(s).
// Return an empty vector if none.

// Function to find strings in the vector that contain at least one digit
// vector<string> test(vector<string> words) {
//     // Creating a new vector to store strings containing digits
//     vector<string> newVec;

//     for(auto& text : words){
//         // Using find_if to search for a digit in the current string
//         auto it = find_if(text.begin(), text.end(), [](char c){return isdigit(c);});

//         if(it != text.end()){ // If a digit is found in the string
//             newVec.push_back(text); // Add the string to the 'result' vector
//         }
//     }
//     return newVec;

// }
// int main(int argc, char *argv[])
// {
//     // initialize vector of strings
//     vector<string> words = {"Maria93", "Kiril", "vaseto18", "blackkkkk", "lili", "Mario14"};
//     // Calling the test function to find strings containing digits
//     vector<string> newVec = test(words);

//     for (string &c : newVec)
//         cout << c << " ";

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// Task. 2 . Given a vector of positive integers and an integer X. Return the frequency of X in the vector.


// int frequencyOfX(vector<int>& numbers, int x) {
//     int count = 0;
//     for (int num : numbers) {
//         if (num == x) {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     vector<int> numbers = { 1, 2, 3, 4, 2, 5, 2 };
//     int x = 2;

//     int duplicateNum = frequencyOfX(numbers, x);

//     cout << "Frequency of " << x << " in the vector is: " << duplicateNum << endl;

//     return 0;
// }


// --------------------------------------------------------------------------------------------------

// Task. 3
// Sherlock considers a string valid if all characters of the string appear the same number of times.
// It is also valid if he can remove just 1 character at i index in the string,
// and the remaining characters will occur the same number of times.
// Given a string , determine if it is valid. If so, return YES, otherwise return NO.

// Шерлок счита даден низ за валиден, ако всички символи на низа се появяват еднакъв брой пъти.
// Също така е валидно, ако той може да премахне само 1 знак при i индекс в низа,
// а останалите знаци ще се появят същия брой пъти.
// Даден е низ, определете дали е валиден. Ако е така, върнете ДА, в противен случай върнете НЕ.

// string isValidString(string& s) {
//     std::unordered_map<char, int> charCount;

//     for(char c : s)
//     {
//         charCount[c]++;
//     }
//     unordered_map<int, int> countFrequency;

//     for(auto& pair : charCount)
//     {
//         countFrequency[pair.second]++;
//     }
//     if(countFrequency.size() == 1){
//         return "Yes";
//     }
//     else if (countFrequency.size() == 2){
//         auto it = countFrequency.begin();
//         int firstCount = it->first;
//         int firstFrequency = it->second;
//         ++it;
//         int secondCount = it ->first;
//         int secondFrequency = it-> second;

//         if((firstFrequency == 0 && (firstCount == 0 || firstCount - secondCount == 1) ||
//              firstFrequency == 1 && (firstCount == 1 || firstCount - secondCount == 1) ||
//              secondFrequency == 1 && (secondCount == 1 || secondCount - firstCount == 1))) {
//             return "Yes";
//         }
//     }

//         return "No";

// }

// int main() {

//     string s;
//     cout << "Enter a string: ";
//     cin >> s;
//     cout << isValidString(s) << endl;

//     return 0;
// }



// --------------------------------------------------------------------------------------------------

// Task. 4 Write a C++ program that counts the number of unique characters in two given strings.



// int countUniqCahr(string str1, string str2){
//     string concatenate = str1 + str2;
//     string result;

//     for (char ch : concatenate) {

//         // Check if the character is not already present in the result string
//         if(count(result.begin(), result.end(), ch) == 0) {
//             result += ch;   // If the character is not in concatenated string, add it
//         }
//     }
//     return result.length();

// }
// int main(){

//     string str1 = "aaz12mjddd";
//     string str2 = "bbb567ap1f";

//     int countNumber = countUniqCahr(str1, str2);

//     cout << countNumber;
//     cout << endl;
//     return 0;
// }


// --------------------------------------------------------------------------------------------------

// Task.5
// Given names and phone numbers, assemble a phone book that maps friends' names to their
// respective phone numbers. You will then be given an unknown number of names to query your
// phone book for. For each name queried, print the associated entry from your phone book on a new
// line in the form name=phone Number; if an entry for name is not found, print Not found instead.


// int main(){

//     map<string, string>PhoneBook;
//     PhoneBook["Robi"] = "0888888888";
//     PhoneBook["Moni"] = "0889999999";
//     PhoneBook["Leksi"] = "0888111111";
//     PhoneBook["Fati"] = "0889333333";
//     PhoneBook["Mitko"] = "0889444444";
//     // other variant to add name and phone in PhoneBook
//     PhoneBook.insert({"Valio", "0889654789"});

//     string queryName;
//     while(cin >> queryName){
//         //if the element is found before the end of the map
//         if(PhoneBook.find(queryName) != PhoneBook.end()) {
//             cout << queryName << "=" << PhoneBook[queryName] << endl;
//             //if the element is present then you can access it using the index (in our task queryName)
//         }
//         else {
//             cout << "Not found" << endl;
//         }
//     }

//     return 0;
// }



// --------------------------------------------------------------------------------------------------

// Task.6
// You are given a sequence of positive integers. Your objective is to remove some of the elements in
// the list so that it will be a good sequence. We call a sequence good if for each element x in the
// sequence, the value x occurs exactly x times in the sequence.
// For example, (3,3,3), (4,2,4,1,4,2,4) and () (an empty sequence) are good sequences, while (3,3,3,3)
// and (2,4,1,4,2) are not.
// Find the minimum number of elements that needs to be removed so that the given sequence will be good.



// // Function to return minimum number of elements that needs to be removed
// int minDeleteElement(int numArr[], int n)
// {

//     // To store the frequency of
//     // the array elements
//     unordered_map<int, int> count;

//     // Store frequency of each element
//     for (int i = 0; i < n; i++)
//         count[numArr[i]]++;

//     // To store the minimum deletions
//     int del = 0;

//     for (auto pair : count) {

//         // Value
//         int num = pair.first;

//         // It's frequency
//         int frequency = pair.second;

//         // If number less than or equal
//         // to it's frequency
//         if (num <= frequency) {

//             // Delete extra occurrences
//             del += (frequency - num);
//         }

//         // Delete every occurrence of x
//         else
//             del += frequency;

//     }
//     if (del == 0)
//     {
//         cout << "Good sequence" << endl;
//         //return del;
//     }
//     else {
//         cout << "Bad sequnce" << endl;
//         cout << "The minimum number of elements that needs to be removed so that the given sequence will be GOOD is: ";
//         //return del;
//     }
//     return del;

// }

// int main()
// {
//     //int arr[] = { 3, 3, 3 };
//     //int arr[] = { 2, 4, 1, 4, 2 };
//     int arr[] = { 4, 2, 4, 1, 4, 2, 4, 5};

//     // n is the number of element present in that array
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << minDeleteElement(arr, n);

//     return 0;
// }


// -----------------------------------------------------------------------------

// Task. 7 As the guys fried the radio station facilities, the school principal gave them tasks as a punishment.
// Dustin's task was to add comments to Nginx configuration for school's website. The school has
// servers and each server has a name and an IP (names are not necessarily unique, but IPs are). Dustin
// knows the IP and name of each server. For simplicity, we will assume that an Nginx command is of
// form "command IP;" where command is a string consisting of English lowercase letter only, and IP is
// the IP of one of school servers.
// Nobody ever memorizes the IPs of servers, so to understand the configuration better, Dustin has to
// comment the name of server that the IP belongs to at the end of each line (after each command).
// More formally, if a line is "command IP;" Dustin has to replace it with "command IP; #name" where
// name is the name of the server with IP equal to IP. Dustin does not know anything about Nginx, so he
// panicked again and his friends asked you to do his task for him.


// Example:
// Using database:
// twitter 8.8.8.8
// codeforces 212.193.33.27
// server 138.197.64.57

// Input:
// redirect 138.197.64.57;
// block 8.8.8.8;
// cf 212.193.33.27;
// unblock 8.8.8.8;
// check 138.197.64.57;

// Output:
// redirect 138.197.64.57; #server
// block 8.8.8.8; #google
// cf 212.193.33.27; #codeforces
// unblock 8.8.8.8; #google
// check 138.197.64.57; #server


 //map <string, string> serverInfo;

// int main () {

//     string command, ip, name;

//     cout << "We have three IP address: " << endl;
//     cout << "8.8.8.8;" << endl;
//     cout << "212.193.33.27;" << endl;
//     cout << "138.197.64.57;" << endl;

//     cout << "Please enter command and IP address" << endl;

//     cin >> command >> ip;


//     if(ip == "8.8.8.8;")
//     {
//         name= "google";
//     }

//     if(ip == "212.193.33.27;")
//     {
//         name= "codeforces";
//     }

//     if(ip == "138.197.64.57;")
//     {
//         name= "server";
//     }

//     cout << command << ";" << " " << ip << " #" << name;

//     return 0;
// }

int main() {
    unordered_map<string, string> servers = {
        {"8.8.8.8", "google"},
        {"212.193.33.27", "codeforces"},
        {"138.197.64.57", "server"}
    };

    //create a string
    string line;
    // take a input from user and write in line
    while (getline(cin, line)) {
        // Find position of ' ' using find()
        int pos = line.find(' ');
        // representing a non-position (probably -1)
        if (pos == string::npos) {
            cout << line << endl;
            continue;
        }

        // Copy substring before pos
        // Extract everything before the " " in the string
        string command = line.substr(0, pos);
        int ip_pos = line.find(' ', pos + 1);
        // Copy ip after pos
        string ip = line.substr(pos + 1, ip_pos - pos - 1);
        string server_name = servers[ip];

        cout << command << ' ' << ip << "; #" << server_name << endl;
    }

    return 0;
}















