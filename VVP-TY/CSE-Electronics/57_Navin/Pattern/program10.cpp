#include<bits/stdc++.h>
using namespace std;

//Butterfly star pattern

void helpPrint(int i, int j){
    if(i%2==1 && j%2==1){
        cout<<"*";
    }
    else if(i%2==0 && j%2==0){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}

void printHelp(int j){
    if(j%2==1){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}

int main(){
    int row = 9;

    cout<<"10th Butterfly star pattern"<<endl;
    //upper part
    for(int i=1; i<=row; i++){
        //star logic
        for(int j=1; j<=i; j++){
            helpPrint(i, j);
        }

        //space logic
        for(int j=1; j<=(row-i)*2-1; j++){
            cout<<" ";
        }

        //star logic
        for(int j=1; j<=i; j++){
            if(j==1 && i==row){
                continue;
            }
            printHelp(j);
        }
        
        cout<<endl;
    }

    //Lower part
    for(int i=row-1; i>=1; i--){
        //star logic
        for(int j=1; j<=i; j++){
            helpPrint(i, j);
        }

        //space logic
        for(int j=1; j<=(row-i)*2-1; j++){
            cout<<" ";
        }

        //star logic
        for(int j=1; j<=i; j++){
            printHelp(j);
        }
        cout<<endl;
    }

    
}