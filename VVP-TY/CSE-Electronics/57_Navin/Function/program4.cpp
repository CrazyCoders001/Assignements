#include<bits/stdc++.h>
using namespace std;
//Write a function countDigits(int n) to count the number of digits in an integer.

int countDigits(int n){
    int count=0;

    while (n > 0){
        n/=10;
        count++;
    }

    return count;
}

int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;

    cout<<"Digits = "<<countDigits(num);

}