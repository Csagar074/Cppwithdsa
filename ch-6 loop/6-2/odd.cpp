#include<iostream>
using namespace std;
main(){
    int a;
    cout << "Enter The number :=  ";
    cin >> a;
    int n =1;
    while(a >= n){
        if(a % 2 != 0){
            cout << a << "\t";
        }
        a--;
    }
}