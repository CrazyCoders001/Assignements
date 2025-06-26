// Write a function that takes two integers and returns their product.
#include <iostream>
using namespace std;
int multiply(int a, int b) // User-defined function to multiply two integers
{
    return a * b;
}
int main() // Main function to test the multiply function
{
    int x = 3, y = 4;  // You can change these values to test other inputs
    cout << "Input: " << x << " " << y << ",Output: " << multiply(x, y) << endl; // funcion call
    return 0;
}

