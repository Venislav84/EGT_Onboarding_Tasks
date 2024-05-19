#include <iostream>
#include <vector>
#include <functional>
#include <string>
using namespace std;


//  -------------------------------------------   Lambda expressions and std::function    ------------------------------------


//Easy :

//Lambda:

//1. Create a lambda expression that takes two integers as input and returns their sum.

//int main()
//{
//
//    auto sum = [](int a, int b) {return a + b;};
//    cout << sum(54 , 13);
//
//    return 0;
//}

//2. Create a lambda expression that takes a string as input and returns the length of the string.

//int main()
//{
//
//    auto text = [](string duma) {return duma.length(); };
//    cout << text("Miroslav");
//
//    return 0;
//}

//3. Create a lambda expression that takes a vector of integers as input and returns the sum of all the elements in the vector.

//int main()
//{
//    
//    auto vecNum = [](vector<int> numbers) {
//        int sum = 0;
//        
//        for (auto num : numbers)
//        {
//            sum += num;
//        }
//        return sum;
//    };
//  vector<int> nums = {5, 7, 9, 11, 44, 1005};
//  int result = vecNum(nums);
//  cout << result << endl;
//
//    return 0;
//}

//Function :

//4. Create a std::function that takes no arguments and returns void.Call the function and print a message inside it.

//void printMesage()
//{ 
//    cout << "Easy busy" << endl; 
//};
//
//int main()
//{
//    function<void()> newFunc = printMesage;
//
//    newFunc();
//
//    return 0;
//}


//5. Create a std::function that takes an int as an argument and returns an int.
// Call the function with an integer parameter and print the result.

//int square(int num) { return num * num; }
//
//int main() {
//	std::function<int(int)> func = square;
//
//
//	int num = 5;
//	int result = func(num);
//
//	std::cout << "Result: " << result << std::endl;
//
//	return 0;
//}


// 6. Create a std::function that takes a string as an argument and returns a boolean.
// Call the function with a string parameter and print the result.


//bool isMesage(const string& text) { return text.length(); }
//
//int main() {
//	std::function<bool(const string&)> func = isMesage;
//
//	string words = "Lili";
//	bool result = func(words);
//
//	std::cout << "Your text is: " << result << std::endl;   // return 1
//	// Sets the boolalpha format flag for the str stream.
//	std::cout << boolalpha << "Your text is: " << result << std::endl;   // return true
//
//	return 0;
//}

//Lambda :

//1. Create a lambda expression that takes a vector of integers as input and returns the maximum element in the vector.



//int main() {
//	auto max_element = [](std::vector<int> vec) {
//		int max = vec[0];
//		for (int num : vec) {
//			if (num > max) { max = num; }
//		}
//		return max;
//		};
//	std::vector<int> numbers = { 4, 8, 29, 56, 19 };
//	int result = max_element(numbers);
//	std::cout << "The maximum element in the vector is: " << result << std::endl;
//	return 0;
//}


// 2. Create a lambda expression that takes a vector of strings as input and returns the concatenated string.

//int main() {
//	auto concStr = [](std::vector<string> vec) {
//		string concSquence = "";
//		for (string word : vec) {
//			concSquence += word;
//		}
//		return concSquence;
//		};
//	std::vector<string> vecWords = { "Miro", "Joro", "pepi", "love", "Fanta."};
//	string result = concStr(vecWords);
//	std::cout << "The concatenated string is: " << result << std::endl;
//	return 0;
//}

// 3. Create a lambda expression that takes two vectors of integers as input and merges them into a single vector.

//int main() {
//
//	auto mergeVetors = []( vector<int>& vec1, vector<int>& vec2) -> vector<int>
//		{
//			vector<int> mergedVec;
//			mergedVec.insert(mergedVec.end(), vec1.begin(), vec1.end());
//			mergedVec.insert(mergedVec.end(), vec2.begin(), vec2.end());
//
//			return mergedVec;
//		};
//
//	vector<int> vec1 = { 4, 17, 22, 35 };
//	vector<int> vec2 = { 31, 7, 14, 9 };
//
//	vector<int> result = mergeVetors(vec1, vec2);
//	for (int res : result) {
//		cout << res << " ";
//	}
//	
//	return 0;
//}


//Function :
// 
//1. Create a std::function that takes two integers as arguments and returns the sum of the two numbers.
// Call the function with two integer parameters and print the result.


//int main() {
//	std::function<int(int, int)> sum = [](int a, int b) { return a + b; };
//
//
//	int num1 = 5;
//	int num2 = 10;
//
//	int result = sum(num1, num2);
//
//	std::cout << "The sum of " << num1 << " and " << num2 << " is: " << result << std::endl;
//
//	return 0;
//}

//function declaration
//int addition(int a, int b);
//
//int main()
//{
//    int num1; //to store first number
//    int num2; //to store second number
//    int add; //to store addition
//
//    //read numbers
//    cout << "Enter first number: ";
//    cin >> num1;
//    cout << "Enter second number: ";
//    cin >> num2;
//
//    //call function
//    add = addition(num1, num2);
//
//    //print addition
//    cout << "Addition is: " << add << endl;
//
//    return 0;
//}
//
////function definition
//int addition(int a, int b)
//{
//    return (a + b);
//}

//2. Create a std::function that takes a vector of integers as an argument and returns the sum of all the elements in the vector.
// Call the function with a vector of integers and print the result.

// first variant
//int main() {
//
//	
//	auto printNums = [](vector<int> vec) {
//		int sum = 0;
//		
//		for (int v : vec) {
//			sum += v;
//		}
//		return sum;
//	};
//	vector<int> vect = { 10, 20, 30, 40, 540 };
//	int res = printNums(vect);
//	cout << res;
//
//	return 0;
//}

// second variant
//int sumVector(const std::vector<int>& vec) 
//{ 
//	int sum = 0; 
//	for (int i : vec) {
//		sum += i; 
//	} 
//	return sum; 
//}
//
//int main() {
//	std::vector<int> vec = { 1, 2, 3, 4, 5 };
//
//	std::function<int(const std::vector<int>&)> sumFunction = sumVector;
//
//	int result = sumFunction(vec);
//
//	std::cout << "The sum of the vector is: " << result << std::endl;
//
//	return 0;
//}

// 3. Create a std::function that takes a lambda function as an argument and calls the lambda function inside it.
// Call the function with a lambda that prints a message.

//void callLambdaFunction(const std::function<void()>& func) {
//    func();
//}
//
//    int main() {
//        auto lambda = []() {
//            std::cout << "Hello from lambda function" << std::endl;
//            };
//
//        callLambdaFunction(lambda);
//
//        return 0;
//    }


















