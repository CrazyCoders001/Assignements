#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 3. Count Occurrences of a Given Number
    cout << "3. Count Occurrences of a Given Number" << endl;

    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }
    int target=0;
    cout << "Enter Target Element : ";
    cin>>target;

    int count=0;
    for (int i = 0; i < size; i++){
        if(arr[i]== target){
            count++;
        }
    }
    cout << count;
}