#include <bits/stdc++.h>
using namespace std;

// Write a recursive function printAscending(int n) that prints numbers from 1 to n.

void printAscending(int n){
    if(n > 0){
        printAscending(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    printAscending(num);
}
