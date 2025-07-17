#include<iostream>
using namespace std;
main(){
    int n,last;
    int rev = 0;
    cout << "Enter any Number :=  ";
    cin >> n;
    while(n != 0){
        last = n % 10;
        rev = rev *10+last;
        n/=10;
    }
    cout << rev;
}