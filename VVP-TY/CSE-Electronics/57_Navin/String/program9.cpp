#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 9. Toggle Case

    cout << "9. Toggle Case " << endl;
    string str4,res="";
    cout << "Enter a string : ";
    cin>>str4;
    for(int i=0;i<str4.length();i++){
        if(65 <= str4[i] && str4[i] <= 90){
            res+=str4[i]+32;
            }
        if(97 <= str4[i] && str4[i] <= 122){
            res+=str4[i]-32;
        }
    }
    cout <<res;
}