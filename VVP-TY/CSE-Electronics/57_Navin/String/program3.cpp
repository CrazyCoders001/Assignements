#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

// 3. Count Vowels and Consonants
    cout << "3. Count Vowels and Consonants" << endl;
    string str1;
    int vowels = 0, consonants = 0;
    cout << "Enter a String : ";
    cin>>str1;

    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' ||
            str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U') {
            vowels++;
        } else {
            consonants++;
        }
        
    }

    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;
}