#include <iostream>
using namespace std;

int main() {
    cout <<"9th Diamond Pattern "<<endl;
    int k=4;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j >= k)
                cout <<"* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }
    k=1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            if (j > k)
                cout <<"* ";
            else
                cout << " ";
        }
        k++;
        cout << "\n";
    }
}