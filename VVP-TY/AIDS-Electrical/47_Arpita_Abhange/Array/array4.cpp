//Count Even and Odd Numbers
//Problem:
//Given an array of integers nums, return the count of even and odd numbers.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;

    int nums[n];
    cout<<"Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;  
        }
    }

    cout<<"Even numbers : "<<evenCount<<endl;
    cout<<"Odd numbers : "<<oddCount<<endl;

    return 0;
}
