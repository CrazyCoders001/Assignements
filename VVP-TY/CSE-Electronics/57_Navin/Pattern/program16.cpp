#include <iostream>
using namespace std;

int main() {
    cout << "16th K pattern"<<endl;
    int k=5;
    for(int i=k;i>=0;i--){
        for(int j=0;j<i;j++)
            cout <<"* ";
        if(i!=0)
            cout <<endl;
    }
    for(int i=1;i<k;i++){
        for(int j=0;j<=i;j++)
            cout <<"* ";
    cout <<endl;
    }
}