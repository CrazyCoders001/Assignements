#include <iostream>
using namespace std;

int main() {
    cout << "17th Triangle star pattern"<<endl;

    int k=5;
    for(int i=0;i<k;i++){
        for(int j=k;j>=i;j--)
            cout << " ";
        for(int d=0;d<=i;d++)
            cout <<"* ";
    
        cout<<endl;
    }
}