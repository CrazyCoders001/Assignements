#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

//2. Count Words in a Sentence
    cout << "2. Count Words in a Sentence" << endl;
    string lines;
    int wordCount = 0;
    cout << "Enter a String : ";
    getline(cin, lines);

    for (int i = 0; i < lines.length(); i++) {
        if (lines[i] == ' ')
            wordCount++;
    }

    cout << wordCount+1<<endl;
}