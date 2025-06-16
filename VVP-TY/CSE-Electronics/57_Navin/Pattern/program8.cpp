#include <iostream>
using namespace std;

int main() {
    cout<<"8th Rhombus pattern"<<endl;

    for(int i = 1; i <= 5; i++) {
        for (int j = 1; j < i; j++)
        cout << " ";
        for (int j = 1; j <= 4; j++)
        cout << " *";
        
        cout << endl;
    }
    
}