#include <iostream>
using namespace std;

int main() {
    cout<<"24th Pascal's Triangle"<<endl;

    int k=4;
    for(int i=1;i<=k;i++){
        for(int d=0;d<=k-i;d++)
            cout<<" ";
        int n=1;
        for(int j=1;j<=i;j++){
            cout <<n<<" ";
            n=n*(i-j)/j;
        }
        cout<<endl;
    }
}