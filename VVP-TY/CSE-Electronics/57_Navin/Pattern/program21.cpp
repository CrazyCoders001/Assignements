#include <iostream>
using namespace std;

int main() {
    
    cout << "21th Hellow Reverse Triangle Pattern"<<endl;
    int k=5;
    for (int i = k; i >= 1; i--) {
        for (int d = i; d < k; d++)
            cout<<" ";
        
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || i==k|| j==(2 * i - 1))
                cout <<"*";
            else
                cout << " ";
        }
        cout <<endl;
    }
}