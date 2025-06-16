#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 5. Longest Word in a Sentence
    cout << "5. Longest Word in a Sentence" << endl;
    string longestword,word,sentence;

    cout << "Enter the sentence : ";
    getline(cin,sentence);

    for(int i=0; i< sentence.length();i++) {
        if(sentence[i]==' '){
            if(word.length() > longestword.length()) {
                longestword=word;
            }
            word="";
        }else{
            word+=sentence[i];
        }
    }

    cout << longestword << endl;
}