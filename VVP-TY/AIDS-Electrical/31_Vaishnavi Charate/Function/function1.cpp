//Write a function that takes an integer as input and returns whether it is even or odd.
#include <iostream>
using namespace std;
string checkEvenOdd(int n) // User-defined function to check even or odd
{
    if (n % 2 == 0)
        return "Even";
    else
        return "Odd";
}
int main() // Main function to test the logic
{
    int number = 7;  //  value
    cout << "Input: " << number<< " ,Output: " << checkEvenOdd(number) << endl; //function call
    return 0;
}
