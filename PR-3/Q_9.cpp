#include<iostream>
using namespace std;
main(){
    
    int i,j,s;
    for(i=1; i<=5; i++){
        for(s=5; s>i; s--){
            cout << "  ";
        }
        for(j=i; j>=1; j--){
            cout << "* ";
        }
        for(j=2; j<=i; j++){
            cout << "* ";
        }

        cout << endl;
    }
    for(int i=4; i>=1; i--){
        for(s=i; s<5; s++){
            cout << "  ";
        }
        for(int j=i; j>=1; j--){
            cout << "* ";
        }
        for(int j=2; j<=i; j++){
            cout << "* ";
        }
        
        cout << endl;
    }
}