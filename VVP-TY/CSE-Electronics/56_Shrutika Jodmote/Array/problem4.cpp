#include <iostream>
using namespace std;
// count odd and even
int main() {
    int nums[5], even=0, odd=0;
cout<<"Enter 5 numbers:"; 
    for(int i=0; i<5; i++) {
 cin>>nums[i];
        if(nums[i]%2 == 0) even++;
        else odd++;
    }
  cout<<"Even"<<even<<"Odd"<<odd;
} 
