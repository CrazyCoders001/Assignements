#include<iostream>
using namespace std;
// all character unique
int main() {
    string s;
 cout <<"Enter string:";
 cin >> s;
    for(int i = 0; i < s.length(); i++) {
        for(int j = i + 1; j < s.length(); j++) {
            if(s[i] == s[j]) {
   cout <<"Not all unique";
       return 0;
      }
     }
    }
    cout << "All unique";  
}
