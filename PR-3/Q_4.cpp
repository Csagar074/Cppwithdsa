#include<iostream>
using namespace std;

main(){
    int i,j,s;

    for(i=5; i>=1; i--){
        for(s=5; s>i; s--){
            cout <<"_";
        }
        for(j=1; j<=i; j++){
            if(j%2==0){
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout <<endl;
    }
}