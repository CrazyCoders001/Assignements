#include<bits/stdc++.h>
using namespace std;
//Write a function maxOfThree(int a, int b, int c) to return the largest among three integers.

int maxOfThree(int a,int b,char c){
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main(){

    int firstNum,secNum,trdNum;
    cout<<"Enter First Number : ";
    cin>>firstNum;
    cout<<"Enter Second Number : ";
    cin>>secNum;
    cout<<"Enter Third Number : ";
    cin>>trdNum;

    cout<<"Maximum = "<<maxOfThree(firstNum,secNum,trdNum);

}