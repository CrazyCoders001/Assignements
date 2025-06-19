#include <iostream>
using namespace std;
// array sorted or not
int main() {
    int nums[5];
    cout<<"Enter 5 numbers:";
    for(int i = 0; i < 5; i++) {
        cin>>nums[i];
    }
    for(int i = 0; i < 4; i++) {
        if(nums[i] > nums[i+1]) {
  cout<<"not sorted";
     }
    }
   cout<<"sorted";
}
