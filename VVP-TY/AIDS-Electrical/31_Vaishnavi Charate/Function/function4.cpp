//Write a function that takes three integers and returns the largest among them.
#include <iostream>
using namespace std;
int findMax(int a, int b, int c) // User-defined function to find the maximum of three numbers 
{
    int maxVal = a;
    if (b > maxVal) maxVal = b;
    if (c > maxVal) maxVal = c;
    return maxVal;
}
int main() // Main function to test the findMax function
{
    int x = 3, y = 7, z = 5;  // inputs
    cout << "Input: " << x << " " << y << " " << z << " ,Output: " << findMax(x, y, z) << endl; //function call
    return 0;
}
