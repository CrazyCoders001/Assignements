#include <bits/stdc++.h>
using namespace std;

//  Write a recursive function sumUpTo(int n) that returns the sum of numbers from 1 to n.

int sumUpTo(int n){
    if(n==0)
        return 0;
    else
        return n+sumUpTo(n-1);
}

int main(){

    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout <<"Sum = "<<sumUpTo(num);

}