#include<iostream>
using namespace std;
main(){
    int a,n;
    cout << "Enter the Year You Went to Start :=  ";
    cin >> a;
    cout << "Enter the Year You Went to End :=  ";
    cin >> n;
    while(a <= n){
        if(a % 4 == 0){
            cout << a << "\t";
        }
        a++;
    }
}