//📘 Write a function minOfThree(int a, int b, int c) to return the largest among three integers.
//🔹 Sample Input 1: a = 5, b = 12, c = 9
//📤 Output: Minimum = 5
//🔹 Sample Input 2: a = 44, b = 27, c = 30
//📤 Output: Minimum = 27
#include <iostream>
using namespace std;
// User-defined function to find the minimum of three numbers
int minOfThree(int a, int b, int c) 
{
    int minVal = a;
    if (b < minVal) minVal = b;
    if (c < minVal) minVal = c;
    return minVal;
}
// Main function to test minOfThree
int main() 
{
    // Test Case 1
    int a1 = 5, b1 = 12, c1 = 9;
    cout << "Input: " << a1 << ", " << b1 << ", " << c1 << " -> Minimum = " << minOfThree(a1, b1, c1) << endl;

    // Test Case 2
    int a2 = 44, b2 = 27, c2 = 30;
    cout << "Input: " << a2 << ", " << b2 << ", " << c2 << " -> Minimum = " << minOfThree(a2, b2, c2) << endl;

    return 0;
}
