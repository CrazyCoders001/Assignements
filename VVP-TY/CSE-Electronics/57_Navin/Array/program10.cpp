#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
//10. Rotate Array by K Steps
    cout<< " 10.  Rotate Array by K Steps "<<endl;
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }
    int k=0;
    cout << "Enter no of steps : ";
    cin>>k;


    int temp[size];
    for (int i = 0; i < size; i++) {
        temp[(i + k) % size] = arr[i];  //temp[0+2]%5=2
    }
    for (int i = 0; i < size; i++) {
        cout << temp[i] << " ";
    }
}