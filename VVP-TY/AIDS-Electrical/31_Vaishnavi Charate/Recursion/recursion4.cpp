//4. Check if Array is Sorted
//📘 Write a recursive function isSorted(int arr[], int n) that checks if an array is sorted in ascending order.
//🔹 Sample Input 1: arr = {1, 2, 3}, n = 3 ; 📤 Output: Array is sorted.
//🔹 Sample Input 2: arr = {5, 3, 2}, n = 3 ; 📤 Output: Array is not sorted.
#include <iostream>
using namespace std;
// Recursive function to check if the array is sorted in ascending order
bool isSorted(int arr[], int n) 
{
    if (n == 1 || n == 0)
        return true;
    if (arr[n - 2] > arr[n - 1])
        return false;
    return isSorted(arr, n - 1);
}
int main() 
{
    int arr1[] = {1, 2, 3};  // Test Case 1
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Input: {1, 2, 3} ";
    if (isSorted(arr1, n1))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;
  
    int arr2[] = {5, 3, 2}; // Test Case 2
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Input: {5, 3, 2} ";
    if (isSorted(arr2, n2))
        cout << "Array is sorted." << endl;
    else
        cout << "Array is not sorted." << endl;
    return 0;
}

