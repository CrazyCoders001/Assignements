//1. Print Numbers from 1 to N
//📘 Write a recursive function printAscending(int n) that prints numbers from 1 to n.
//🔹 Sample Input 1: n = 3 , 📤 Output: 1 2 3
//🔹 Sample Input 2: n = 5, 📤 Output: 1 2 3 4 5
#include <iostream>
using namespace std;
void printAscending(int n) 
{
    if (n == 0)
        return;
    printAscending(n - 1); //recursive function
    cout << n << " ";
}
int main() 
{    
    int n1 = 3; // Test Case 1
    cout << "Input: " << n1 << " -> Output: ";
    printAscending(n1); // recursive function recall
    cout << endl;
    int n2 = 5; // Test Case 2
    cout << "Input: " << n2 << " -> Output: ";
    printAscending(n2); // recursive function recall
    cout << endl;
    return 0;
}

