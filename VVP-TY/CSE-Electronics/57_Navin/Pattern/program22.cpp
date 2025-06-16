#include <iostream>
using namespace std;

int main() {
    cout <<"22th Hellow Diamond Pattern "<<endl;
    int k=5;
    for (int i = 1; i <= k; i++) {

        for(int d=1; d<=k-i;d++)
            cout<<" ";

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j== 2 * i - 1)
                cout <<"*";
            else
                cout << " ";
        }
        cout <<endl;
    }
    for (int i = k-1; i >= 1; i--) {
        for(int d=1;d<=k-i;d++)
            cout<<" ";

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j ==1 || j== 2 * i - 1)
                cout <<"*";
            else
                cout << " ";
        }
        cout <<endl;
    }
}