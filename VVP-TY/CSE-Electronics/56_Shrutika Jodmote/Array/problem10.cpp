#include <iostream>
using namespace std;
// rotate array
int main() {
    int nums[5], k, temp[5];
    cout<<"Enter 5 numbers";
    for(int i=0; i<5; i++) cin >> nums[i];
    cout << "Enter rotation steps: ";
    cin >> k;
    k = k%5;
    for(int i=0; i<5; i++) {
    temp[(i+k)%5] = nums[i];
    }
    cout<<"Rotated:";
    for(int i=0; i<5; i++)cout<<temp[i] << " ";
}
