#include<iostream>
using namespace std;

main(){

    int i,j;

    for(i=5; i>=1; i--){
        for(j=i; j>=1; j--){

            (j%2==0)
            ?cout <<"1"
            :cout <<"0";
        }

        cout<<endl;
    }
}