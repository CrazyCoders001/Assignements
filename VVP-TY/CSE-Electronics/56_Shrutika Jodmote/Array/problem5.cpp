#include <iostream>
using namespace std;
// reverse array
int main() {
    int numbers[4];
cout<<"Enter 4 numbers:";
    for(int i = 0; i < 4; i++) {
     cin>>numbers[i];
    }
 cout<<"Reversed";
    for(int i = 3; i >= 0; i = i - 1) {
cout<<numbers[i]<< " ";
    }
}
