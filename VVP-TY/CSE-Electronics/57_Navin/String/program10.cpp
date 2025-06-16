#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

//10.Remove Non-Alphabetic Characters
    cout<< " 10. Remove Non-Alphabetic Characters"<<endl;
    string str5,newstr;

    cout << "Enter a string : ";
    cin >> str5;

     for(int i=0;i<str5.length();i++){
        if((65 <= int(str5[i]) && int(str5[i]) <= 90) || (97 <= int(str5[i]) && int(str5[i]) <= 122)){
                newstr+=str5[i];
            }
    }

    cout << newstr <<endl;
}