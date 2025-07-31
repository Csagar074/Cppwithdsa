#include<iostream>
using namespace std;
main(){
    int i,j;
    for( i=1; i<=7; i++){
        for(j=1; j<=7; j++){
            if(
                (i==1 && (j>=1 && j<=7)) ||(j==1) || (i==5 && (j>=3 &&j <= 7)) || (i == 6 && j==5) ||  (i==7 && (j>=1 && j<=5))   
            ){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout <<  endl;
    }
}