#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 5. Reverse an Array
    cout << "5. Reverse an Array" << endl;
    
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }

    for (int i = size -1; i >= 0 ; i--){
        cout << arr[i] <<" ";
    }
    
    // int rev[size];
    // int j=0;
    // for (int i = size-1; i >= 0; i--){
    //     rev[j]=arr[i];
    //     j++;
    // }
    // for (int i = 0; i < size; i++){
    //     cout << rev[i]<<" ";
    // }
    
}