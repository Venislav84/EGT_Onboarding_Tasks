#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <string>
#include <set>
#include <list>
using namespace std;


// EASY PROBLEMS
// 1. Create a vector of strings and print out each element using a range - based for loop.

//int main()
//{
//    vector<string> words = {"vilica", "chiniq", "chasha", "hoj", "salfetka"};
//    
//    for (int i = 0; i < words.size(); i++)
//    {
//
//        cout << words[i]<< " ";
//    }
//
//    return 0;
//}

//2. Create an array of integers with a size of 5 and initialize it with values 1, 2, 3, 4, 5. Print out the sum of all the elements.

//int main()
//{
//    int sum = 0;
//    int arr[5] = { 1, 2, 3, 4, 555 };
//    for (int a : arr)
//    {
//        sum += a;
//        
//    }
//    cout << "The sum is: " << sum;
//
//    return 0;
//}

//3. Create a map where the key is a string and the value is an integer.
// Insert three key - value pairs and print out the value associated with a specific key.


//int main(){
//    map<string, int> myMap = { 
//        { "One", 1 },
//        { "Two", 2 },
//        { "Three", 3 }
//    };
//    myMap["Four"] = 4;
//    myMap["Five"] = 5;
//    myMap["six"] = 6;
//
//    string key = "Four";
//
//    cout << key << " : " << myMap[key];
//
//
//    return 0;
//}


//4. Create a set of integers and insert the values 5, 10, and 15. Print out the size of the set.


//int main() {
//    
//    std::set<int, greater<int>> mySet;
//    mySet.insert(5);
//    mySet.insert(10);
//    mySet.insert(15);
//    mySet.insert(20);
//    mySet.insert(10);  // vtoroto 10 ne go dobawq, zashtoto set sadarja samo unikalni stojnosti
//
//    cout << "My set size is: " << mySet.size() << endl;;
//
//    for (const auto& num : mySet) {
//        std::cout << "Num is: " << num << std::endl;
//    }
//
//    return 0;
//}

// ----------------------     with  iterators   -------------------------

//int main(){
//std::set<int> mySet;
//mySet.insert(5);
//mySet.insert(10);
//mySet.insert(15);
//mySet.insert(20);
//mySet.insert(30);
//mySet.insert(45);
//mySet.insert(60);
//
//cout << "My set size is: " << mySet.size() << endl;;
//
//// create iterator
//std::set<int>::iterator itr;
//
// //print with iteartor
//for (itr = mySet.begin();itr != mySet.end(); itr++)
//{
//	std::cout << "Print my set: " << *itr << " " << endl;
//}
//
//// assignt the value of mySet to mySet2
//
//set<int> mySet2(mySet.begin(), mySet.end());
//
//
////print with iteartor
//for (itr = mySet2.begin(); itr != mySet2.end(); itr++)
//{
//	std::cout << "Print my set 2: " << *itr << " " << endl;
//}
//
//int num = mySet2.erase(45);
//
//std::cout << "Num " << num << " " << endl;
//for (itr = mySet2.begin(); itr != mySet2.end(); itr++)
//{
//	std::cout << "Print my set 2: after deleting 45 " << *itr << " " << endl;
//}
//mySet2.erase(mySet2.begin(), mySet2.find(45));
//
//for (itr = mySet2.begin(); itr != mySet2.end(); itr++)
//{
//	std::cout << "Print my set 2 after delting from 0 to 45: " << *itr << " " << endl;
//}
//return 0;
//}



//5. Create a pair where the first element is a string and the second element is an integer.
// Initialize the pair with the values "key" and 10. Print out the first element of the pair.


//int main() {
//
//	//pair<string, int> myPair = {"golden key", 10};
//
//	// vtori sistaksis za sazdawane na pair
//	pair <string, int> myPair ("silber key", 10);
//	std::cout << myPair.first;
//
//	return 0;
//}


//6. Create a string and concatenate it with another string using the + operator. Print out the resulting string.

//int main() {
//
//	string str1 = "Miro ";
//	string str2 = "Petrov";
//	string res = str1 + str2;
//	cout << "The result from the concatenating of the two string s is: " << res << endl;
//
//	return 0;
//}



// MEDIUM PROBLEMS

// 1. Create a vector of integers and sort it in descending order.Print out the sorted vector.

//int main() {
//
//	vector <int> vec = { 1, 2, 3, 114, 7, 22, 54, 3, 5, 200, 6 };
//
//	sort(vec.begin(), vec.end(), greater<int>());
//
//	// second variant
//	//sort(vec.rbegin(), vec.rend());
//
//	for (auto& num : vec) {
//		cout << num << " ";
//	}
//	return 0;
//}


//2. Create an array of floats with a size of 4 and initialize it with random values.Calculate the average of all the elements.


//int main() {
//
//	float sum = 0;
//	float arr[4];
//	arr[0] = 20;
//	arr[1] = 4;
//	arr[2] = 22;
//	arr[3] = 14.5;
//
//	for (auto& num : arr) {
//		sum += num;
//	}
//
//	float avg = sum / 2;
//	cout << "The average value is: " << avg;
//
//	return 0;
//}


//3. Create a map where the key is an integer and the value is a vector of strings.
// Insert three key - value pairs and print out all the strings associated with a specific key.


//int main() {
//
//	map <int, vector<string>> myMap{
//		{1, {"Miro", "Moro", "Maria"}},
//		{2, {"Gergin", "Gogo", "Gergana"}},
//		{3, {"Lili", "Larisa"}},
//		{4, {"Deni"}},
//	};
//
//	for (auto& key : myMap) {
//		//std::cout << key << endl;
//		for (auto& value : key.second) {
//			cout << value << endl;
//		}
//	}
//
//	return 0;
//}


//4. Create two sets of integers and perform a union operation to combine them into a new set.Print out the elements of the new set.

//int main() {
//
//	set<int> set1 = { 10, 15, 7, 8, 22 };
//	set<int> set2 = { 11, 44, 17, 1, 5, 3, 4};
//	set<int> set3;
//
//	std::set_union(begin(set1), end(set1),
//		begin(set2), end(set2),
//		inserter(set3, begin(set3)));
//
//	for (auto& num : set3) {
//		cout << num << " ";
//	}
//	
//	// vtrori variant
//	/*set1.insert(set2.begin(), set2.end());
//
//	for (auto& num : set1) {
//		cout << num << " ";
//	}*/
//	
//	return 0;
//}


//5. Create a pair where the first element is a map of integers to strings and the second element is a vector of floats.
// Initialize the pair with some values and print out a specific float value.


//int main() {
//
//
//	return 0;
//}



