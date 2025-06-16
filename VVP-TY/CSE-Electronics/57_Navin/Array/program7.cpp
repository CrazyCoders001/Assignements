#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 7.  Find Second Largest Element

    cout << "7. Find Second Largest Element" <<endl;
    
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }

    int lar=0,senlar=0;
    for (int i = 0; i < size; i++){
        if(arr[i]>lar){
            senlar=lar;
            lar=arr[i];
        }
    }

    cout << senlar;
    

}