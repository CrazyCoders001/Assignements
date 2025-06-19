#include<bits/stdc++.h>
using namespace std;
//toggle case
int main(){
    string s;
    cout<<"Enter string: ";
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])) s[i] = tolower(s[i]);
        else if(islower(s[i])) s[i] = toupper(s[i]);
    }
    cout<<"Toggled case: "<<s;
}
