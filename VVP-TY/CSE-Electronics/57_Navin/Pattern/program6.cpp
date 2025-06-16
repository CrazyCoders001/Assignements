#include <iostream>
using namespace std;

int main() {
    cout<<"6th zero-one triangle"<<endl;

    for (int i = 1; i <= 4; i++) {
        for (int j = 0; j < i; j++) {
            cout << (j+i) % 2 << " ";
        }
        cout << endl;
    }

}