#include <bits/stdc++.h>
using namespace std;

// Write a recursive function printReverse(int n) to print the digits of a number in reverse order.


void printReverse(int n){
    if(n > 0){
        cout<<n%10<<" ";
        printReverse(n/10);
        
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    printReverse(num);
}