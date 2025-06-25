//Find Index of Target Element
//Problem:
//Given an array nums and a target value x, return the index of the first occurrence of x. If not found, return -1.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter of elements in array: ";
    cin>>n;

    int nums[n];
    cout<<"Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    int x;
    cout<<"Enter target value : ";
    cin >> x;

    int index = -1; 

    for (int i = 0; i < n; i++) {
        if (nums[i] == x) {
            index = i;
            break; 
        }
    }

    cout<<"Index of first occurrence of " <<x<< ": " <<index<<endl;

    return 0;
}
