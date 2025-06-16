#include <iostream>
using namespace std;

int main() {
    cout <<"13th reverse Right Half Pyramid"<<endl;
    int k=5;
    for(int i=k;i>=0;i--){
        for(int j=0;j<i;j++)
            cout <<"* ";
    cout <<endl;
    }
}