#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 8. Check if Array is Sorted

    cout << "8. Check if Array is Sorted "<<endl;
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }

    bool flag=true;
    for (int i = 1;i < size;i++){
        if (arr[i] < arr[i-1])
            flag=false;
    }

    if(flag)
        cout <<"true";
    else
        cout <<"false";
    
}