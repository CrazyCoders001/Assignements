#include <iostream>
using namespace std;

int main() {
    cout<<"5th Number changing Pyramid"<<endl;

    int n = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << n++ << " ";
        }
        cout << endl;
    }
}