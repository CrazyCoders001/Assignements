#include<iostream>
using namespace std;
// factorial
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n;i++){
      fact = fact*i;
    }
 return fact;
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num);
}
