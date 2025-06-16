#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

//6.  Remove Duplicates from Array

    cout << "6.  Remove Duplicates from Array "<<endl;
    
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }

    sort(arr, arr+size);
    int temp[size];       
    int i = 0, j = 0;      
    temp[j++] = arr[i++];
    for( i=1; i<size; i++){
        if(arr[i] != arr[i-1]){
            temp[j++] = arr[i];
        }
    }
    
    for (int i = 0; i < j; i++){
        cout << temp[i]<<" " ;
    }
    


}