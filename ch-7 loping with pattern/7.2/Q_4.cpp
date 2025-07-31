#include<iostream>
using namespace std;

main(){
    int i,j,s;

        for(i=5; i>=1; i--){
            for(s=5;  s>i; s--){
                cout<<"_";
            }
            for(j=i; j>=1; j--){
                cout<<j;
            }
            cout <<endl;
        }
}