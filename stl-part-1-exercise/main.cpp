#include <QCoreApplication>
#include <QLocale>
#include <QTranslator>
#include <vector>
#include <stack>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;



// Task.1 Дадени са два стека от числа, подредени в намаляващ ред от върха към дъното.
// Да се напише функция mergeStacks, която построява нов стек, състоящ се от всички елементи на дадените два стека,
//подредени в нарастващ ред от върха към дъното.
//        Пример:  5,3,1 6,2,1 -> 1,1,2,3,5,6


// std::stack<int> mergeStacks(std::stack<int> stack1, std::stack<int> stack2) {
//     std::stack<int> resultStack;

//     while (!stack1.empty() && !stack2.empty()) {
//         if (stack1.top() > stack2.top()) {
//             resultStack.push(stack1.top());
//             stack1.pop();
//         } else {
//             resultStack.push(stack2.top());
//             stack2.pop();
//         }
//     }

//     while (!stack1.empty()) {
//         resultStack.push(stack1.top());
//         stack1.pop();
//     }

//     while (!stack2.empty()) {
//         resultStack.push(stack2.top());
//         stack2.pop();
//     }

//     return resultStack;
// }

// int main() {

//     std::stack<int> stack1, stack2;
//     //Read input from stack1
//         cout << "Please enter numbers for first stack: ";
//         int num;
//         while(cin >> num)
//         {
//             stack1.push(num);
//             if(cin.get() == '\n'){
//                 break;
//             }
//         }
//         // Read input from stack2
//         cout << "Please enter numbers for second stack: ";
//         while(cin >> num)
//         {
//             stack2.push(num);
//             if(cin.get() == '\n'){
//                 break;
//             }
//         }

//     std::stack mergedStack = mergeStacks(stack1, stack2);

//     // Print the merged stack in ascending order
//     while (!mergedStack.empty()) {
//         std::cout << mergedStack.top() << " ";
//         mergedStack.pop();
//     }

//     return 0;
// }

// -------------------------------------------------------------------------------------

// Task. 2 Дадена е следната дефиниция за аритметичен израз, пълен откъм скоби:
// <израз> ::= <цифра> | (<израз> <операция> <израз>)
// <операция> ::= +| - | * | /
// Да се напише функция, която по даден аритметичен израз, пресмята неговата стойност.
//            Пример:
//            Вход: ((1+2)*((2+4)/(8-6)))
//            Изход: 9.



// int evaluateExpression(string expr) {
//     stack<int> values;
//     stack<char> ops;
//     for (int i = 0; i < expr.length(); i++) {
//         if (expr[i] == ' ') {
//             continue;
//         }
//         else if (expr[i] == '(') {
//             ops.push(expr[i]);
//         }
//         else if (isdigit(expr[i])) {
//             int num = 0;
//             while (i < expr.length() && isdigit(expr[i])) {
//                 num = num * 10 + (expr[i] - '0');   // Този код прочита цифрите от символен низ expr и ги добавя към числото num,
//                     // като преобразува символите в цифри.
//                 i++;
//             }
//             values.push(num);
//             i--;
//         }
//         else if (expr[i] == ')') {
//             while (!ops.empty() && ops.top() != '(') {
//                 int val2 = values.top();
//                 values.pop();
//                 int val1 = values.top();
//                 values.pop();
//                 char op = ops.top();
//                 ops.pop();
//                 if (op == '+') {
//                     values.push(val1 + val2);
//                 }
//                 else if (op == '-') {
//                     values.push(val1 - val2);
//                 }
//                 else if (op == '*') {
//                     values.push(val1 * val2);
//                 }
//                 else if (op == '/') {
//                     values.push(val1 / val2);
//                 }
//             }
//             if (!ops.empty()) {
//                 ops.pop(); // remove '('
//             }
//         }
//         else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/') {
//             while (!ops.empty() && ops.top() != '(' && ((expr[i] == '*' || expr[i] == '/') || (ops.top() == '+' || ops.top() == '-'))) {
//                 int val2 = values.top();
//                 values.pop();
//                 int val1 = values.top();
//                 values.pop();
//                 char op = ops.top();
//                 ops.pop();
//                 if (op == '+') {
//                     values.push(val1 + val2);
//                 }
//                 else if (op == '-') {
//                     values.push(val1 - val2);
//                 }
//                 else if (op == '*') {
//                     values.push(val1 * val2);
//                 }
//                 else if (op == '/') {
//                     values.push(val1 / val2);
//                 }
//             }
//             ops.push(expr[i]);
//         }
//     }

//     while (!ops.empty()) {
//         int val2 = values.top();
//         values.pop();
//         int val1 = values.top();
//         values.pop();
//         char op = ops.top();
//         ops.pop();
//         if (op == '+') {
//             values.push(val1 + val2);
//         }
//         else if (op == '-') {
//             values.push(val1 - val2);
//         }
//         else if (op == '*') {
//             values.push(val1 * val2);
//         }
//         else if (op == '/') {
//             values.push(val1 / val2);
//         }
//     }

//     return values.top();
// }

// int main() {
//     //string expr = "((1+2)*((2+4)/(8-6)))";
//     //string expr = "(((1+2)*(2+4))*((90/2)/(3*5)))";
//     string expr = "((1+2)*(2+4) * (10/2) * (3*5) )";
//     cout << evaluateExpression(expr) << endl;

//     return 0;
// }



// -------------------------------------------------------------------------------------

// Task. 3





















// double calculate(string expression){
//     vector<int> operands = {operand1, operand2};
//     vector<char> operators;

//     for(char c : expression)
//     {
//         if(c == '('){

//         } else if (c == '+' || c == '-' || c == '*' || c = '/') {
//             operators.push_back(c);
//         } else if(c == ')') {

//             char op = operators;
//             double result;
//             switch (op) {
//             case '+': result = operand1 + operand2; break;
//             case '-': result = operand1 - operand2; break;
//             case '*': result = operand1 * operand2; break;
//             case '/': result = operand1 / operand2; break;
//             default:
//                 break;
//             }

//             operands.push_back(result);
//         }
//         return operands;
//     }
// }

// int main() {

//     string input;
//     cout << "Please enter some aritmetical task: " << endl;
//     getline(cin, input);

//     double result = calculate(input);
//     cout << "Result: " << result << endl;

//     return 0;
// }

//--------------------------------------------------------------------------------

// double evaluateExpression(std::string expression) {
//     std::stack<int> operands;
//     std::stack<char> operators;

//     for (char c : expression) {
//         if (c == '(') {
//             // do nothing
//         } else if (c == '+' || c == '-' || c == '*' || c == '/') {
//             operators.push(c);
//         } else if (c == ')') {
//             int operand2 = operands.top();
//             operands.pop();
//             int operand1 = operands.top();
//             operands.pop();
//             char op = operators.top();
//             operators.pop();

//             int result;
//             switch (op) {
//             case '+':
//                 result = operand1 + operand2;
//                 break;
//             case '-':
//                 result = operand1 - operand2;
//                 break;
//             case '*':
//                 result = operand1 * operand2;
//                 break;
//             case '/':
//                 result = operand1 / operand2;
//                 break;
//             }

//             operands.push(result);
//         } else {
//             operands.push(c - '0');
//         }
//     }

//     return operands.top();
// }

// int main() {
//     std::string input = "((1+2)*((2+4)/(8-6)))";
//     int result = evaluateExpression(input);
//     std::cout << "Result: " << result << std::endl;

//     return 0;
// }




