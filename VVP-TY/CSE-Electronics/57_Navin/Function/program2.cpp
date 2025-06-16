#include<bits/stdc++.h>
using namespace std;
//Write a function isPrime(int n) that returns true if the number is prime, otherwise false.

bool isPrime(int n){
    if(n <= 1 ){
        return false;
    }
    
    int divs=0;
    for(int i=2;i<=n/2;i++){
        if(n%i == 0){
            return false;
            break;
        }
    }
    return true;
}

int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;

    if(isPrime(num))
        cout<<num<<" is a Prime Number";
    else
        cout<<num<<" is not a Prime Number";
    
}