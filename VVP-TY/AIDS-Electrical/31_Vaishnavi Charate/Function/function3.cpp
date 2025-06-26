//Write a function that returns the factorial of a given non-negative integer.
#include <iostream>
using namespace std;
int factorial(int n) // User-defined function to calculate factorial 
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() // Main function to test factorial
{
    int num = 5;  // inputs
    cout << "Input: " << num << " -> Output: " << factorial(num) << endl; // function call
    return 0;
}
