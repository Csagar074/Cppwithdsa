#include<iostream>
using namespace std;
main(){
    int i,j;

// 1 
// 1 2 
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1 

    for(i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    for(i=4; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j <<" ";
        }
        cout << endl;
    }


}