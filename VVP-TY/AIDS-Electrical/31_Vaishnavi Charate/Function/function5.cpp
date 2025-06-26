// Write a function that checks if a given number is a palindrome.
#include <iostream>
using namespace std;
string isPalindrome(int n) // User-defined function to check if a number is a palindrome 
{
    int original = n, reversed = 0;
    while (n > 0) 
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return (original == reversed) ? "Yes" : "No";
}
int main() // Main function to test the isPalindrome function 
{
    int num = 121;  // inputs
    int num1 =236;  // inputs
    cout << "Input: " << num << "Output: " << isPalindrome(num) << endl; // function call
    cout << "Input: " << num1 << "Output: " << isPalindrome(num1) << endl; // function call
    return 0;
}
