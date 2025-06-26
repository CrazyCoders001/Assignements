//2. Print Reverse of a Number
//📘 Write a recursive function printReverse(int n) to print the digits of a number in reverse order.
//🔹 Sample Input 1: n = 123 , 📤 Output: 3 2 1
//🔹 Sample Input 2: n = 4501 , 📤 Output: 1 0 5 4
#include <iostream>
using namespace std;
// Recursive function to print digits of a number in reverse
void printReverse(int n)
{
    if (n == 0)
        return;
    cout << n % 10 << " ";   // Print last digit
    printReverse(n / 10);    // Recursive call on remaining digits
}
int main() 
{
    int n1 = 123;  // Test Case 1
    cout << "Input: " << n1 << "; Output: ";
    printReverse(n1);
    cout << endl;
    int n2 = 4501; // // Test Case 2
    cout << "Input: " << n2 << "; Output: ";
    printReverse(n2);
    cout << endl;
    return 0;
}
