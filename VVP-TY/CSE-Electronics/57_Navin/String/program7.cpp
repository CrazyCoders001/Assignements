#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 7. Valid Anagram

    cout << "7.Valid Anagram" <<endl;
    string s,t;
    cout << "Enter string for s : ";
    cin >> s;
    cout << "Enter string for t : ";
    cin >> t;


    if(s.length()==t.length()){
        for (int i = 0; i < s.length(); i++){
            for (int j = 0; j < t.length(); j++){
                if(s[i]==t[j])
                    t.erase(j,1);
            }
        }
        if(t.length()==0 )
            cout <<"true";
        else
            cout <<"false";
    }else{
        cout << "false";
    }
}