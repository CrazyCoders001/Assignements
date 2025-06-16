#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 1. Count Positive, Negative, and Zero Elements
    cout << "1. Count Positive, Negative, and Zero Elements" << endl;
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }
    
    int zero=0,pos=0,neg=0;
    for (int i = 0;i < size ;i++){
        if(arr[i]<0)
            neg++;
        else if(arr[i]>0)
            pos++;
        else
            zero++;
    }

    cout << "Positive: "<< pos <<" , Negative: " << neg << " , Zero: "<< zero;

}
