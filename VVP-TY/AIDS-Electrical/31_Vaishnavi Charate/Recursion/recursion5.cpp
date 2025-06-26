//5. Print Sum from 1 to N
//📘 Write a recursive function sumUpTo(int n) that returns the sum of numbers from 1 to n.
//🔹 Sample Input 1: n = 4 ;📤 Output: Sum = 10 (1+2+3+4)
//🔹 Sample Input 2: n = 7 ;📤 Output: Sum = 28 (1+2+3+4+5+6+7)
#include <iostream>
using namespace std;
// Recursive function to calculate sum from 1 to n
int sumUpTo (int n) 
{
    if (n == 0)
        return 0;
    return n + sumUpTo(n - 1);
}
int main() 
{
    int n1 = 4;  // Test Case 1
    cout << "Input: " << n1 << "Sum = " << sumUpTo(n1) << endl;
   
    int n2 = 7;  // Test Case 2
    cout << "Input: " << n2 << "sum = " << sumUpTo(n2) << endl;
    return 0;
}
