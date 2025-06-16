#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 8.  Character Frequency Counter

    cout << " Character Frequency Counter "<<endl;
    string str3;
    cout << "Enter a string : ";
    cin>>str3;

    int freq[256] = {0};
    for (int i = 0; i < str3.length(); i++) {
        freq[str3[i]]++;
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            cout << (char)i << ": " << freq[i] << endl;
        }
    }
}