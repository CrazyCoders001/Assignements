#include<bits/stdc++.h>
using namespace std;
//Write a function isPalindrome(int n) to check if a number is a palindrome (same when reversed).


int isPalindrome(int n){
    int temp=n,revnum = 0;
    while (n != 0) {
        int digit = n % 10;
        revnum = revnum * 10 + digit;
        n /= 10;
    }

    if(temp==revnum)
        return true;
    else
        return false;
}

int main(){

    int num;
    cout<<"Enter Number : ";
    cin>>num;

    if(isPalindrome(num))
        cout<<num<< " is a palindrome.";
    else
        cout<<num<<" is not a palindrome.";

}