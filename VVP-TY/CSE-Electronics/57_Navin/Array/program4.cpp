#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 4. Count Even and Odd Numbers
    cout << "4. Count Even and Odd Numbers" << endl;
    
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }
    int odds=0,evens=0;
    for (int i = 0; i < size; i++){
        if (arr[i] % 2 == 0)
            evens++;
        else
            odds++;    
    }

    cout << "Even : "<< evens << " Odd : " << odds ;
    

}