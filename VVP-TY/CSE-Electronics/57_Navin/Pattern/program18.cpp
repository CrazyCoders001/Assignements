#include <iostream>
using namespace std;

int main() {
    cout << "18th Reverse Number Triangle pattern"<<endl;

    int k=5;
    for(int i=1;i<k;i++){
        for(int d=0;d<i;d++)
            cout <<" ";
        for(int d=i;d<k;d++)
            cout <<d<<" ";
        cout<<endl;
    }
}