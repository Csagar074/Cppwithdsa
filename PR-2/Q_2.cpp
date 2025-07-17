#include<iostream>
using namespace std;
main(){
    int num, digit,rev=0,k=0,multipiction=0,checking;
    cout << "Enter the Number := ";
    cin >> num;
    checking =num;
    digit = num;
    while(digit != 0){
        rev = rev * 10 + (digit % 10);
       digit /= 10;
    }
    while(rev != 0){
        k++;
        int digit = rev % 10;
        int num = 1;
        for(int j=1; j<=k; j++){
            num *= digit;
        }
        multipiction += num;
        rev /= 10;
    }
    if(multipiction== checking){

        cout << checking<< "This Number Disarium....!";
    }
    else{
        cout << checking<< "This Number is not a Disarium....!";
    }
}