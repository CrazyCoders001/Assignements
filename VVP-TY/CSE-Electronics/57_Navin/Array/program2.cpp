#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

//2. Find Index of Target Element

    cout << "2. Find Index of Target Element" << endl;
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

    int ind=-1;
    for (int i = 0; i < size; i++){
        if(arr[i]== target){
            ind=i;
            break;
        }
    }

    cout << ind;

}