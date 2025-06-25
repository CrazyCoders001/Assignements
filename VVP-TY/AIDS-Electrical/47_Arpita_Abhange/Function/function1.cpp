//Problem 1: Check Even or Odd
//Problem Statement:
//Write a function that takes an integer as input and returns whether it is even or odd.

#include<bits/stdc++.h>
using namespace std;

void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        cout<<number<<" is Even"<<endl;
    } else {
        cout<<number<<" is Odd"<<endl;
    }
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    checkEvenOdd(num);
}
