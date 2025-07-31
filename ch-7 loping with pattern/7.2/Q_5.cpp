#include <iostream>
using namespace std;

main(){
    int i,j,s;

    for(i=1; i<=5; i++){
        for(s=1; s<i; s++){

        }
        for(j=i; j<=5; j++){
            if(i%2==0){
                cout <<j;
            }else{
                cout<<j%2;

            }
        }
        cout <<endl;
    }
}