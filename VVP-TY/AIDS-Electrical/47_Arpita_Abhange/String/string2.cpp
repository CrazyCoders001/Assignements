//Count Words in a Sentence
//Problem:
//Given a sentence string s, count and return the number of words. Words are separated by spaces.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string inpString;
    cout<<"Enter Input string :";
    cin>>inpString;

    getline(cin, inpString);

    int spaceCount = 0;
    for(int i=0; i<inpString.length(); i++){
        char ch = inpString[i];
        if(ch == ' '){
            spaceCount++;
        }
    }

    int wordCount = spaceCount + 1;
    cout<<"Word Count = "<<wordCount;
}
