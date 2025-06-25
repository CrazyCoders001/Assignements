//Reverse an Array
//Problem:
//Given an array of integers nums, return the array in reversed order.
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=9;
    int arr[n] = {1,2,3,4,5,6,7,8,9};

    int temp;
    for(int i=0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
