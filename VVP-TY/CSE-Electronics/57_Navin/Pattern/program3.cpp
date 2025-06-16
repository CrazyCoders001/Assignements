#include <iostream>
using namespace std;

int main() {
    cout<<"3rd Number increasing Pyramid"<<endl;

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}