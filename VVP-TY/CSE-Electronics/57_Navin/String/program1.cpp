#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 1. check if all characters are Unique
    cout << "1. Check if all characters are Unique" << endl;
    string str;
    bool unique=true;
    cout << "Enter a String: ";
    cin >> str;

    for(int i=0; i < str.length() ;i++){
        for (int j = i+1; j < str.length(); j++)
        {
            if(str[i]==str[j]){
                unique=false;
                break;
            }
        }        
    }
    if (unique) {
        cout << "true";
    } else {
        cout << "false";
    }
    cout << endl << endl;
}
