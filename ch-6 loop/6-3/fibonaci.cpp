#include<iostream>
using namespace std;
main(){
    int n,a=1,b=2,i=0;
    cout << "Enter the Number :=  ";
    cin >> n;
    cout << a << "\t" << b <<"\t";
    int c=0;
    while(i <= n){
        c = a + b;
        a = b;
        b = c;
        cout << c << "\t";
        i++;
    }

}