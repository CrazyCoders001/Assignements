#include<iostream>
using namespace std;
// check even odd
string checkEvenOdd(int n){
    if(n % 2 == 0) return "Even";
    else return "Odd";
}
int main(){
    int num;
    cin>>num;
    cout<<checkEvenOdd(num);
}
