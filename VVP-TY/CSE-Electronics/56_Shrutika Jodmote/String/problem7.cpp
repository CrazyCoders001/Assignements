#include<iostream>
using namespace std;
// valid anagram
int main(){
    string s, t;
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s == t) cout<<"Anagrams";
    else cout<<"Not anagrams";
}
