#include <iostream>
using namespace std;

int main() {

    cout<<"25th Right Pascal’s Triangle"<<endl;

    int k=5;
    for(int i=1;i<k;i++){
        for(int d=0;d<i;d++)
            cout <<"* ";
        for(int d=i;d<k;d++)
            cout <<" ";
        cout<<endl;
    }
    for(int i=k-2;i>0;i--){
        for(int d=i+1;d>1;d--)
            cout <<"* ";
        for(int d=i;d<k;d++)
            cout <<" ";
        cout<<endl;
    }
}