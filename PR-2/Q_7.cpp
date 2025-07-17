#include<iostream>
using namespace std;
main(){
    int num, L_digit;
    cout << "Enter any Num:";
    cin >> num;
    L_digit = num % 10;
    while(num >= 10){
        num/=10;
    }

    cout << "the Addition :=  " << L_digit+num;
}