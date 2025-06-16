#include<bits/stdc++.h>
using namespace std;
//Write a function calculate(int a, int b, char op) that takes two integers and an operator (+, -, *, /) and returns the result.

int calculate(int a,int b,char c){
    if(c=='+')
        return a+b;
    else if(c=='-')
        return a-b;
    else if(c=='*')
        return a*b;
    else if(c=='/')
        return a/b;
    else
        return 0;
}

int main(){

    int firstNum,secNum;
    char op;
    cout<<"Enter First Number : ";
    cin>>firstNum;
    cout<<"Enter Second Number : ";
    cin>>secNum;
    cout<<"Enter operator Number : ";
    cin>>op;

    if(op=='+'|| op=='-'|| op=='*'|| op=='/')
        cout<<firstNum<<" "<<op<<" "<<secNum<<" = "<<calculate(firstNum,secNum,op);
    else
        cout<<"You Enterd Wrong operator";

}
