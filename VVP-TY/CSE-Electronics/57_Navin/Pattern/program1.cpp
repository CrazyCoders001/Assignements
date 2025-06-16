#include <iostream>
using namespace std;

int main() {
    
    cout<<"1st Square Hellow Pattern"<<endl;

    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 5; j++) {
            if(i == 1 || j==1 || j==5 || i == 6)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }    
}
