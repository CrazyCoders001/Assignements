#include <bits/stdc++.h>
using namespace std;

// Write a recursive function isSorted(int arr[], int n) that checks if an array is sorted in ascending order.

bool isSorted(int arr[],int n){
    if(n==0){
        return true;
    }
    if(arr[n] < arr[n-1])  // 4 < 3 // 3 < 2 //  
        return false;
    else
        return isSorted(arr,n-1);

}

//{2,3,4} , 3

int main(){

    int size;
    cout << "Enter Array Size : ";
    cin>>size;

    int arr[size];

    for(int d=0;d<size;d++){
        cout<<"Element at "<<d+1<<" : ";
        cin>>arr[d];
    }

    if(isSorted(arr,size-1))
        cout << "Array is sorted.";
    else
        cout << "Array is not sorted.";
    
}