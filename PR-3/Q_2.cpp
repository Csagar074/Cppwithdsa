#include <iostream>
using namespace std;

main(){
    int i,j;
    int coute=11;

    for(i=1; i<=4; i++){
        for(j=i; j >=1; j--){
            cout <<coute++;

        }
        cout <<endl;
    }
}