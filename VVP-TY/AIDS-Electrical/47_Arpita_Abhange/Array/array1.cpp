//Count Positive, Negative, and Zero Elements
//Problem:
//Given an array nums, count how many elements are positive, negative, and zero.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter elements in array: ";
    cin>>n;

    int nums[n];
    cout<<"Enter elements:\n";

    for (int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    int positive = 0, negative = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            positive++;
        } else if (nums[i] < 0) {
            negative++;
        } else {
            zero++;
        }
    }

    cout<<"Positive elements: "<<positive<<endl;
    cout<<"Negative elements: "<<negative<<endl;
    cout<<"Zero elements: "<<zero<<endl;

}
