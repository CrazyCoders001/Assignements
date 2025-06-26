//📘 Write a function countDigits(int n) to count the number of digits in an integer.
//🔹 Sample Input 1: n = 8743
//📤 Output: Digits = 4
//🔹 Sample Input 2: n = 90009
//📤 Output: Digits = 5
#include <iostream>
using namespace std;
// User-defined function to count digits in a number
int countDigits(int n) 
{
    if (n == 0) return 1;  // Special case: 0 has 1 digit
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}
// Main function to test countDigits
int main() 
{
    // Test Case 1
    int num1 = 8743;
    cout << "Input: " << num1 << " -> Digits = " << countDigits(num1) << endl; //Function call
    // Test Case 2
    int num2 = 90009;
    cout << "Input: " << num2 << " -> Digits = " << countDigits(num2) << endl; //Function call
    return 0;
}
