#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 9. Find Frequency of Each Element

    cout << "9. Find Frequency of Each Element " << endl;
    int size=0;
    cout << "Enter Elements Size : ";
    cin>>size;
    int arr[size];
    for(int i = 0; i < size; i++){
        cout <<"Enter Element "<< i+1 << " : ";
        cin>>arr[i];
    }
    bool visited[100] = {false}; 

    for (int i = 0; i < size; i++) {
        if (visited[i] == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " : " << count <<endl;
    }
}