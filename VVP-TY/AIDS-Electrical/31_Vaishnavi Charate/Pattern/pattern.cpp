#include <iostream>
using namespace std;
int main() {
    int size = 5;
    for(int i = 1; i <= size; i++) {
        for(int j = size; j > i; j--) {
   cout << " ";
        }
        for(int j = 1; j <= 2*i-1; j++) {
    cout << "*";
     }
   cout << endl;
    }
    for(int i = size-1; i >= 1; i--) {
        for(int j = size; j > i; j--){
   cout << " ";
   }
        for(int j = 1; j <= 2*i-1; j++) {
  cout << "*";
   }
  cout << endl;
 }
}
