#include<iostream>
using namespace std;
// remove duplicate
int main() {
    string s;
  cout<<"Enter string";
  cin >> s;
   string result;  
    for(int i = 0; i < s.length(); i++) {
        int found = 0; 
        for(int j = 0; j < result.length() && !found; j++) {
            if(s[i] == result[j]) {
             found = 1;
      }
     }  
        if(!found) {
        result += s[i];
    }
    }
cout<<"After removing duplicates"<<result;
}
