#include<iostream>
using namespace std;
main(){
    int num,i=0,x=1,y=1,z;
    cout << "Enter any Number:";
    cin >> num;
    while(i <= num){
        x += y;
        y++;
        cout << x<< "\t";
        i++;
    }    
}