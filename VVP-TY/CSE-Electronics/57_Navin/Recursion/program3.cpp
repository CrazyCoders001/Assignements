#include <bits/stdc++.h>
using namespace std;

//  Write a recursive function productOfDigits(int n) that returns the product of digits of the number.

int productOfDigits(int n){
    if(n == 0)
        return 1;
    else
        return n%10 * productOfDigits(n/10);
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout <<"Product = "<<productOfDigits(num);
}