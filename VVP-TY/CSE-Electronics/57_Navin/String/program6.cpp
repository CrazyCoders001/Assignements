#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {

//6. Capitalize Each Word

    cout << "6. Capitalize Each Word "<<endl;

    string sen,newCapSen;
    cout << "Enter the sentence : ";
    getline(cin,sen);

    for (int i = 0; i < sen.length(); i++)
    {
        if (i==0){
             if(97 <= int(sen[i]) && int(sen[i]) <= 122){
                newCapSen+=char(int(sen[i])-32);
                i++;
            }
        }
        if (sen[i]==' ') {
            newCapSen+=" ";
            if(97 <= int(sen[i+1]) && int(sen[i+1]) <= 122){
                newCapSen+=char(int(sen[i+1])-32);
                i++;
            }
        }else{
            newCapSen+=sen[i];
        }
        
    }
    cout << newCapSen << endl;
}