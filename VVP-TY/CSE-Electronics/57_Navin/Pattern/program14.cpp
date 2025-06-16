#include <iostream>
using namespace std;

int main() {
    cout <<"14th Left Half Pyramid"<<endl;
    int k=5;
    for(int i=0;i<k;i++){
        for(int j=k;j>i;j--)
            cout <<"  ";
        for(int j=0;j<=i;j++)
            cout <<" *";
    cout <<endl;
    }
}