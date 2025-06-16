#include <iostream>
using namespace std;

int main() {
    cout<<"7th palindrome triangular"<<endl;
    int k=4,t=k;
    for (int i = 1; i <= k; i++) {
        for(int d=0;d<t;d++)
                cout<<"  ";
        t--;
        for (int j = i; j >= 1 ; j--){
            cout <<j<<" ";
        }
        for (int j = 2; j <= i ; j++){
            cout <<j<<" ";
        }
        cout<<endl;
    }
}