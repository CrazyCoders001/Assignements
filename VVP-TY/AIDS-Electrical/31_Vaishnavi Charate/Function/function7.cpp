// Write a function isPrime(int n) that returns true if the number is prime, otherwise false.
//🔹 Sample Input 1: n = 7
//📤 Output: 7 is a prime number.
//🔹 Sample Input 2: n = 10
//📤 Output: 10 is not a prime number.
#include <iostream>
using namespace std;
// User-defined function to check if a number is prime
bool isPrime(int n) 
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// Main function to test isPrime()
int main() 
{
    int n1 = 7;
    if (isPrime(n1))
        cout << n1 << " is a prime number." << endl;
    else
        cout << n1 << " is not a prime number." << endl;
    int n2 = 10;
    if (isPrime(n2))
        cout << n2 << " is a prime number." << endl;
    else
        cout << n2 << " is not a prime number." << endl;
    return 0;
}
