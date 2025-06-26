//3. Calculate Product of Digits
//📘 Write a recursive function productOfDigits(int n) that returns the product of digits of the number.
//🔹 Sample Input 1: n = 234 , 📤 Output: Product = 24 (2×3×4)
//🔹 Sample Input 2: n = 105 , 📤 Output: Product = 0 (1×0×5)
#include <iostream>
using namespace std;
int productOfDigits(int n) // Recursive function to calculate product of digits
{
    if (n == 0)
        return 1;  //  avoid multiplying with 0 at the end
    if (n < 10)
        return n;
    return (n % 10) * productOfDigits(n / 10); //recursion function call 
}
int main() 
{
    int n1 = 234; // Test Case 1
    cout << "Input: " << n1 << " -> Product = " << productOfDigits(n1) << endl; //recursion function call 
    int n2 = 105; // Test Case 2
    cout << "Input: " << n2 << " -> Product = " << productOfDigits(n2) << endl; //recursion function call 
    return 0;
}
