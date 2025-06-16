#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 4. Remove Duplicate Characters
    cout << "4. Remove Duplicate Characters" << endl;
    string str2;
    cout << "Enter a String : ";
    cin >> str2;

    string dup = "";
    for (int i = 0; i < str2.length(); i++) {
        bool found = false;
        for (int j = 0; j < i; j++){
            if (str2[i] == str2[j]) {
                found = true;
                break;
            }
        }
         if (!found) {
            dup += str2[i];
        }
    }
    cout << dup<< endl;
}