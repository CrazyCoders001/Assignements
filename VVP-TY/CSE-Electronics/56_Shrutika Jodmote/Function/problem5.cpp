#include <iostream>
using namespace std;
// check palindrome or not
int main() {
    int num, original, reversed = 0; 
    cout<<"Enter number";
    cin>>num;
    original = num;
    while(num > 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    if(original == reversed)
  cout<<"Palindrome";
    else
    cout<<"Not palindrome";
}
