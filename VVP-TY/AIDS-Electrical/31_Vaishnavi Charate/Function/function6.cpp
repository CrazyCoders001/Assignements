//Write a function calculate(int a, int b, char op) that takes two integers and an operator (+, -, *, /) and returns the result.
//🔹 Sample Input 1: a = 10, b = 5, op = '+'
//📤 Output: Result = 15
//🔹 Sample Input 2: a = 12, b = 3, op = '/'
//📤 Output: Result = 4
#include <iostream>
using namespace std;
// User-defined function to perform basic arithmetic
int calculate(int a, int b, char op) 
{
    switch(op) 
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b != 0)
                return a / b;
            else 
            {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}
int main() // Main function to test calculate()
{
    // Test Case 1
    int a1 = 10, b1 = 5;
    char op1 = '+';
    cout << "Input: " << a1 << " " << op1 << " " << b1 << " -> Result = " << calculate(a1, b1, op1) << endl;
    // Test Case 2
    int a2 = 12, b2 = 3;
    char op2 = '/';
    cout << "Input: " << a2 << " " << op2 << " " << b2 << " -> Result = " << calculate(a2, b2, op2) << endl;
    return 0;
}

