#include<iostream>
using namespace std;
main(){
    int a,n;
    cout << "Enter first year:";
    cin >> a;
    cout << "Enter second year :";
    cin >> n;
    while(a <= n){
        if(a % 4 == 0){
            cout << a << "\t";
        }
        a++;
    }
}