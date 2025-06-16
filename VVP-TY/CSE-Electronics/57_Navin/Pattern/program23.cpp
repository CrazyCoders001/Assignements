#include <iostream>
using namespace std;

int main() {
    cout<<"23th Hollow Hourglass Pattern"<<endl;

    int k=5;
    for(int i=1;i<=k;i++){
        for(int d=1;d<i;d++)
            cout <<" ";
        for(int d=i;d<=k;d++){
            if(d==i || i==1 || d==k)
                cout <<"* ";
            else
                cout <<"  ";
        }
            cout<<endl;
    }
    for(int i=k-1;i>=1;i--){
        for(int d=1;d<i;d++)
            cout <<" ";
        for(int d=i;d<=k;d++){
            if(d==i||i==1||d==k)
                cout <<"* ";
            else
                cout <<"  ";
        }
        cout<<endl;
    }
}